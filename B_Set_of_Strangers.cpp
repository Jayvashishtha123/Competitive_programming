/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 18/02/2025                             
* Time: 20:26:37                             
* Problem: B_Set_of_Strangers.cpp              
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
int solvee(const vvi& grid, int rows, int cols) {
    unordered_map<int, int> cc;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int c = grid[i][j];
            if(cc.find(c)==cc.end())
                cc[c] = 1;
            if (j + 1 < cols && grid[i][j] == grid[i][j + 1]) {
                cc[c] = 2; 
            }
            if (i + 1 < rows && grid[i][j] == grid[i + 1][j]) {
                cc[c] = 2; 
            }
        }
    } 
    int ans = 0;
    int maxi = 0;
    for (auto& x : cc) {
        ans += x.second;
        maxi = max(maxi, x.second);
    }
    return ans - maxi;
}
void solve() {
    int rows, cols;
    cin >> rows >> cols;

    vvi grid(rows, vi(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
        }
    }
    int result = solvee(grid, rows, cols);
    cout << result << endl;
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
