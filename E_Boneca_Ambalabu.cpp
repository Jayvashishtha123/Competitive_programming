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
    int n; cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vi bitCount(32, 0);
    for (int i = 0; i < n; i++) {
        for (int b = 0; b < 32; b++) {
            if ((a[i] >> b) & 1) {
                bitCount[b]++;
            }
        }
    }
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int b = 0; b < 32; b++) {
            int bit = (a[i] >> b) & 1;
            int oppositeCount = bit ? (n - bitCount[b]) : bitCount[b];
            total += (1LL << b) * oppositeCount;
        }
        maxSum = max(maxSum, total);
    }

    cout << maxSum << endl;
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
