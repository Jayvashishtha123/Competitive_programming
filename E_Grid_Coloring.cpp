/**********************************let's begin**********************************/
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
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, pair<int, int>>>> v;
    int cx = n / 2, cy = m / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int chess = max(abs(i - cx), abs(j - cy));
            int dist = abs(i - cx) + abs(j - cy);
            v.push_back({chess, {dist, {i, j}}});
        }
    }
    sort(v.rbegin(), v.rend());
    for (auto &cell : v) {
        cout << (cell.second.second.first + 1) << " " << (cell.second.second.second + 1) << "\n";
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