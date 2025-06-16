#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
vector<int> freq(MAXN, 0);
vector<vector<int>> dp(MAXN, vector<int>(2, 0));
vector<int> tax;

bool markPath(int u, int target, int parent) {
    if (u == target) {
        freq[u]++;
        return true;
    }
    for (int v : adj[u]) {
        if (v == parent) continue;
        if (markPath(v, target, u)) {
            freq[u]++;
            return true;
        }
    }
    return false;
}

void dfsDP(int u, int parent) {
    dp[u][0] = tax[u] * freq[u];
    dp[u][1] = (tax[u] / 2) * freq[u];

    for (int v : adj[u]) {
        if (v == parent) continue;
        dfsDP(v, u);
        dp[u][0] += min(dp[v][0], dp[v][1]); // can choose to halve or not
        dp[u][1] += dp[v][0];               // child can't be halved
    }
}

int main() {
    int n, m;
    cin >> n;
    tax.resize(n);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; ++i) {
        cin >> tax[i];
    }

    cin >> m;
    vector<pair<int, int>> journeys(m);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        journeys[i] = {u, v};
        markPath(u, v, -1); // count how often each node is used
    }

    dfsDP(0, -1); // root the tree at 0
    cout << min(dp[0][0], dp[0][1]) << endl;

    return 0;
}