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
    string s, p;
    cin >> s >> p;

    int i = 0, j = 0;
    int n = s.size(), m = p.size();

    while (i < n && j < m) {
        if (s[i] != p[j]) {
            cout << "NO" << endl;
            return;
        }

        char ch = s[i];
        int cnt_s = 0, cnt_p = 0;

        while (i < n && s[i] == ch) {
            cnt_s++;
            i++;
        }

        while (j < m && p[j] == ch) {
            cnt_p++;
            j++;
        }

        if (cnt_p < cnt_s || cnt_p > 2 * cnt_s) {
            cout << "NO" << endl;
            return;
        }
    }

    if (i == n && j == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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