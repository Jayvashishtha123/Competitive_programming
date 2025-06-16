#include "bits/stdc++.h"
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
    vector<int> d(n);
    vector<pair<int, int> > vv(n);
    for (int i = 0; i < n; i++) cin >> d[i];
    for (int i = 0; i < n; i++) cin >> vv[i].first >> vv[i].second;
    vector<pair<int, int> > dp(n + 1, make_pair(0, 0));  
    for (int i = 1; i <= n; i++) {
        int l = vv[i - 1].first, r = vv[i - 1].second;
        int prevL = dp[i - 1].first, prevR = dp[i - 1].second;
        int nextL = -1, nextR = -1;
        if (d[i - 1] == 0) { nextL = prevL, nextR = prevR; }
        else if (d[i - 1] == 1) { nextL = prevL + 1, nextR = prevR + 1; }
        else { nextL = prevL, nextR = prevR + 1; }
        nextL = max(nextL, l);
        nextR = min(nextR, r);
        if (nextL > nextR) { cout << -1 << endl; return; } 
        dp[i] = make_pair(nextL, nextR);
    }
    vector<int> ans(n);
    int h = dp[n].first;

    for (int i = n; i >= 1; i--) {
        if (d[i - 1] != -1) ans[i - 1] = d[i - 1];
        else {
            ans[i - 1] = (h <= dp[i - 1].second) ? 0 : 1;
        }
        h -= ans[i - 1];
    }

    for (int i=0;i<ans.size();i++) cout << ans[i] << " ";
    cout << endl;
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