/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 11/03/2025                             
* Time: 21:40:14                             
* Problem: F_Counting_Necessary_Nodes.cpp              
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
     int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    vector<pair<int, int>> x_segments;
    int pos = l1;
    while (pos < r1) {
        int len = 1;
        while (pos % (len * 2) == 0 && pos + len * 2 <= r1) {
            len *= 2;
        }
        x_segments.push_back({pos, len});
        pos += len;
    }
    vector<pair<int, int>> y_segments;
    pos = l2;
    while (pos < r2) {
        int len = 1;
        while (pos % (len * 2) == 0 && pos + len * 2 <= r2) {
            len *= 2;
        }
        y_segments.push_back({pos, len});
        pos += len;
    }
    int total = 0;
    for (auto& x_seg : x_segments) {
        for (auto& y_seg : y_segments) {
            int x_len = x_seg.second;
            int y_len = y_seg.second;
            int small = min(x_len, y_len);
            int big = max(x_len, y_len);
            total += big / small;
        }
    }
    cout << total << endl;
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