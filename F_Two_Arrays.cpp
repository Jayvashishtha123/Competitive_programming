/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define LOCAL
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
vector<int> greedy_assign(const vector<int>& a, const vector<int>& b, bool reverse1, int& score) {
    int n = a.size();
    vector<int> res_a(n), res_b(n);
    set<int> used_a, used_b;

    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    if (reverse1) reverse(idx.begin(), idx.end());

    for (int i : idx) {
        int x = a[i], y = b[i];

        if (x == y) {
            res_a[i] = x;
            res_b[i] = y;
            used_a.insert(x);
            used_b.insert(y);
        } else {
            bool xa = used_a.count(x) == 0;
            bool yb = used_b.count(y) == 0;
            bool ya = used_a.count(y) == 0;
            bool xb = used_b.count(x) == 0;

            int option1 = xa + yb;
            int option2 = ya + xb;

            if (option1 >= option2) {
                res_a[i] = x;
                res_b[i] = y;
                used_a.insert(x);
                used_b.insert(y);
            } else {
                res_a[i] = y;
                res_b[i] = x;
                used_a.insert(y);
                used_b.insert(x);
            }
        }
    }

    score = used_a.size() + used_b.size();
    vector<int> result;
    result.insert(result.end(), res_a.begin(), res_a.end());
    result.insert(result.end(), res_b.begin(), res_b.end());
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;

    int score_forward = 0, score_backward = 0;
    vector<int> forward_result = greedy_assign(a, b, false, score_forward);
    vector<int> backward_result = greedy_assign(a, b, true, score_backward);

    if (score_forward >= score_backward) {
        cout << score_forward << '\n';
        for (int i = 0; i < n; i++) cout << forward_result[i] << " ";
        cout << '\n';
        for (int i = n; i < 2 * n; i++) cout << forward_result[i] << " ";
        cout << '\n';
    } else {
        cout << score_backward << '\n';
        for (int i = 0; i < n; i++) cout << backward_result[i] << " ";
        cout << '\n';
        for (int i = n; i < 2 * n; i++) cout << backward_result[i] << " ";
        cout << '\n';
    }
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
        solve();
    }
    return 0;
}