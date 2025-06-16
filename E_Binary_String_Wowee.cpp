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
/********************************** SOLUTION **********************************/
const int MOD = 998244353;
const int MAXN = 501;
int C[MAXN][MAXN];
void nCr() {
    for (int i = 0; i < MAXN; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j)
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
    }
}
void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> dp(k + 1, 0);
    dp[0] = 1;
    for (int i = n - 1; i >= 0; --i) {
        vector<int> ndp(k + 1, 0);
        for (int len = 0; len <= k; ++len) {
            if (dp[len] == 0) continue;
            int max_add = k - len;
            for (int cnt = 0; cnt <= max_add; ++cnt) {
                int total_ops = len + cnt;
                int even = (total_ops + 1) / 2;
                int odd = total_ops / 2;

                int P = (s[i] == '0') ? even : odd;
                if (cnt > P) continue;

                ndp[total_ops] = (ndp[total_ops] + 1LL * dp[len] * C[P][cnt]) % MOD;
            }
        }
        dp = ndp;
    }
    cout<<dp[k] << endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    nCr();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}