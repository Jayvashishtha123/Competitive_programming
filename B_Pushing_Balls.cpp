/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 23/03/2025                             
* Time: 11:20:22                             
* Problem: B_Pushing_Balls.cpp              
******************************************************************************/
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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    bool is = true;
    vector<vector<pair<int, int>>> vv(n, vector<pair<int, int>>(m, {0, 0}));
    for (int i = 0; i < n; i++) {
        if (v[i][0] == '1') vv[i][0].first = 1;
    }
    for (int i = 0; i < m; i++) {
        if (v[0][i] == '1') vv[0][i].second = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (v[i][j] == '1') {
                if (vv[i - 1][j].second == 0 && vv[i][j - 1].first == 0) {
                    is = false;
                    break;
                }
                if (vv[i - 1][j].second == 1) {
                    vv[i][j].second = 1;
                }
                if (vv[i][j - 1].first == 1) {
                    vv[i][j].first = 1;
                }
            }
        }
        if (!is) break;
    }
    if (is)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
