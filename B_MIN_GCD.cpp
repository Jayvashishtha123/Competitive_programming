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
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
void solve() {
    int n;
    cin >> n;
    vi v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }
    sort(v.begin(), v.end());
    int val = v[0];

    if (m[val] > 1) {
        cout << "YES" << endl;
        return;
    }

    int gcdd = 0;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (v[i] % val == 0) {
            gcdd = __gcd(gcdd, v[i]);
            found = true;
        }
    }

    if (found && gcdd == val) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}