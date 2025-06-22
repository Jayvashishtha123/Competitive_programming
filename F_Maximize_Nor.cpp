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
const int N = 1e5 + 5;
const int INF = 1 << 30;

int bitwise_nor(int a, int b, int k) {
    return (~(a | b)) & ((1 << k) - 1);
}
/********************************** SegmentTree **********************************/
 struct SegmentTree {
    int n;
    vector<int> tree;
    SegmentTree(int size) {
        n = size;
        tree.assign(4 * n, 0);
    }
    void update(int node, int l, int r, int ul, int ur, int val) {
        if (ur < l || r < ul) return;
        if (ul <= l && r <= ur) {
            tree[node] = max(tree[node], val);
            return;
        }
        int mid = (l + r) / 2;
        update(2 * node, l, mid, ul, ur, val);
        update(2 * node + 1, mid + 1, r, ul, ur, val);
    }
    void collect(int node, int l, int r, vector<int>& res) {
        if (l == r) {
            res[l] = max(res[l], tree[node]);
            return;
        }
        int mid = (l + r) / 2;
        tree[2 * node] = max(tree[2 * node], tree[node]);
        tree[2 * node + 1] = max(tree[2 * node + 1], tree[node]);
        collect(2 * node, l, mid, res);
        collect(2 * node + 1, mid + 1, r, res);
    }
};
/********************************** SOLUTION **********************************/
void solve(istream &cin, ostream &cout) {
    int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        SegmentTree seg(n);
        map<int, int> nor_map; 
        for (int r = 0; r < n; ++r) {
            map<int, int> new_map;
            new_map[a[r]] = r;
            for (auto &[val, l] : nor_map) {
                int new_val = bitwise_nor(val, a[r], k);
                if (new_map.count(new_val))
                    new_map[new_val] = min(new_map[new_val], l);
                else
                    new_map[new_val] = l;
            }
            for (auto &[val, l] : new_map) {
                seg.update(1, 0, n - 1, l, r, val);
            }
            nor_map = move(new_map);

        }
        vector<int> result(n, 0);
        seg.collect(1, 0, n - 1, result);
        for (int val : result) cout << val << " ";
        cout << "\n";
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


