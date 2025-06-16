/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 28/02/2025                             
* Time: 21:47:21                             
* Problem: C_Trapmigiano_Reggiano.cpp              
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
vector<bool> visited;
vvi adj;
vector<int> dist;
/********************************** SOLUTION **********************************/
void solve() {
    int n, st, en;
    cin >> n >> st >> en;
    adj.assign(n + 1, vi());
    visited.assign(n + 1, false);
    dist.assign(n + 1, 0);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    stack<pair<int, int>> s;
    s.push({en, 0});
    visited[en] = true;

    while (!s.empty()) {
        auto [v, d] = s.top();
        s.pop();
        dist[v] = d;

        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                s.push({u, d + 1});
            }
        }
    }
    vector<int> nodes(n);
    iota(nodes.begin(), nodes.end(), 1);
    sort(nodes.begin(), nodes.end(), [&](int a, int b) {
        return dist[a] > dist[b];
    });

    if (dist[st] < 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < nodes.size(); ++i) {
            cout << nodes[i] << " ";
        }
        cout << endl;
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
