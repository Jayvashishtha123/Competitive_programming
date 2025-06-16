#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;

/********************************** SOLUTION **********************************/
int bfs(int G, const set<int> &uniqueVals) {
    priority_queue<int> q;
    unordered_map<int, int> dist;
    for (int x : uniqueVals) {
        q.push(x);
        dist[x] = 0;
    }
    while (!q.empty()) {
        int v = q.top();
        q.pop();
        if (v == G) return dist[v];
        for (int x : uniqueVals) {
            int next = gcd(v, x);
            if (!dist.count(next)) {
                dist[next] = dist[v] + 1;
                q.push(next);
            }
        }
    }
    return -1; 
}
void solve() {
    int n;
    cin >> n;
    vi v(n);
    set<int> uniqueVals;
    int gcdd = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        gcdd = gcd(gcdd, v[i]);
        uniqueVals.insert(v[i]);
    }
    int cnt = count(all(v), gcdd);

    if (cnt > 0) {
        cout << n - cnt << endl;
    } else {
        int val = bfs(gcdd, uniqueVals);
        if (val == -1) {
            cout << "-1\n";
        } else {
            cout << val + (n - 1) << endl;
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
