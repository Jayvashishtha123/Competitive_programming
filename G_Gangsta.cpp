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
        int n; string s; cin >> n >> s;
    vector<int> P(n + 1); P[0] = 0;
    for (int i = 1; i <= n; ++i){
        if(s[i - 1] == '1'){
            P[i] = P[i-1]+1;
        }else {
            P[i] = P[i-1]-1;
        }
    }
    
    vector<int> vals = P;
    sort(vals.begin(), vals.end());
    auto last = unique(vals.begin(), vals.end());
     vals.erase(last, vals.end());


    int m = vals.size();
    vector<int> cnt(m + 2), sum(m + 2);

    auto id = [&](int x) {
        return lower_bound(vals.begin(), vals.end(), x) - vals.begin() + 1;
    };
    auto upd = [&](vector<int>& bit, int pos, int v) {
        while (pos <= m) bit[pos] += v, pos += pos & -pos;
    };
    auto qry = [&](vector<int>& bit, int pos) {
        int res = 0;
        while (pos) res += bit[pos], pos -= pos & -pos;
        return res;
    };

    int diff = 0;
    for (int r = 1; r <= n; ++r) {
        int p = id(P[r]);
        diff += P[r] * qry(cnt, p) - qry(sum, p);
        diff += (qry(sum, m) - qry(sum, p)) - P[r] * (qry(cnt, m) - qry(cnt, p));
        int q = id(P[r - 1]);
        upd(cnt, q, 1); upd(sum, q, P[r - 1]);
    }

    int total = (n * (n + 1) * (n + 2) / 6 + diff) / 2 + (n + 1) / 2;
    cout << total << endl;
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