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
    int n, q;
    cin >> n >> q;
    int sz = 1LL << n;
    while (q--) {
        string s;
        cin >> s;
        if (s == "->") {
            int x, y;
            cin >> x >> y;
            --x, --y;
            int val = 0, r = x, c = y;
            for (int i = n; i >= 1; --i) {
                int half = 1LL << (i - 1);
                int area = half * half;
                if (r < half && c < half) {
                } else if (r >= half && c >= half) {
                    val += area;
                    r -= half;
                    c -= half;
                } else if (r >= half && c < half) {
                    val += 2 * area;
                    r -= half;
                } else {
                    val += 3 * area;
                    c -= half;
                }
            }
            int base[2][2] = {{1, 4}, {3, 2}};
            val += base[r][c];
            cout << val << endl;

        } else {
            int d;
            cin >> d;
            --d;
            int x = 0, y = 0;
            for (int i = n; i >= 1; --i) {
                int half = 1LL << (i - 1);
                int area = half * half;
                int quadrant = d / area;
                d %= area;
                if (quadrant == 1) {
                    x += half;
                    y += half;
                } else if (quadrant == 2) {
                    x += half;
                } else if (quadrant == 3) {
                    y += half;
                }
            }
            int base[2][2] = {{1, 4}, {3, 2}};
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    if (base[i][j] == d + 1) {
                        cout << x + i + 1 << " " << y + j + 1 << endl;
                    }
                }
            }
        }
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
