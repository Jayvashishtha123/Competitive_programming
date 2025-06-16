#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 6e6;
/********************************* GLOBAL VARIABLES ****************************/
vi primes;
vi primePrefix;
/********************************** SOLUTION **********************************/
void sieve() {
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= N; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
            for(int j = i*i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
    primePrefix.resize(primes.size());
    if(!primes.empty()) {
        primePrefix[0] = primes[0];
        for(int i = 1; i < primes.size(); i++)
            primePrefix[i] = primePrefix[i-1] + primes[i];
    }
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    vector<int> prefixA(n);
    prefixA[0] = a[0];
    for(int i = 1; i < n; i++)
        prefixA[i] = prefixA[i-1] + a[i];
    int ans = 0;
    int low = 1, high = min(n, (int)primes.size());
    while(low <= high) {
        int mid = (low + high)/2;
        if(prefixA[mid-1] >= primePrefix[mid-1]) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << n - ans << endl;
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}