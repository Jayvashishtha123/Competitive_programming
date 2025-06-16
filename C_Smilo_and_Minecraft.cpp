/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
// #define LOCAL
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
void solve(istream &cin, ostream &cout) {
     int n, m, k;
    cin >> n >> m >> k;
    vector<string> mine(n);

    vector<pair<int, int>> gold_positions;  
    vector<pair<int, int>> empty_positions;
    for (int i = 0; i < n; i++) {
        cin >> mine[i];
        for (int j = 0; j < m; j++) {
            if (mine[i][j] == 'g') {
                gold_positions.push_back({i, j});
            } else if (mine[i][j] == '.') {
                empty_positions.push_back({i, j});
            }
        }
    }

    int max_gold = 0;
    for (auto [gx, gy] : gold_positions) {
        bool can_be_collected = false;
        for (auto [ex, ey] : empty_positions) {
            if (abs(gx - ex) <= k && abs(gy - ey) <= k) { 
                if (gx == ex - k || gx == ex + k || gy == ey - k || gy == ey + k) {
                    can_be_collected = true;
                    break;
                }
            }
        }

        if (can_be_collected) {
            max_gold++;
        }
    }

    cout << max_gold << endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve(cin,cout);
    }
    return 0;
}