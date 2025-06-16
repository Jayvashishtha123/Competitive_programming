/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 12/03/2025                             
* Time: 23:23:17                             
* Problem: D_Counting_Points.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
/********************************** SOLUTION **********************************/
void solve() {
    int n, m;
    cin >> n >> m;
    vi v(n), vv(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int j = 0; j < n; j++) cin >> vv[j];

    unordered_map<int, int> vec;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x = v[i];
        for (int j = -vv[i]; j <= vv[i]; j++) {
            int xx = x + j;
            int maxi= sqrt(vv[i]*vv[i]-j*j);
            vec[xx] = max(vec[xx], 2 * maxi + 1);
        }
    }
    for (auto &[key, value] : vec) {
        ans += value;
    }
    cout << ans << endl;
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
