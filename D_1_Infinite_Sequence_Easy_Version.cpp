#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> parents(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> parents[i];
        }

        // Build the tree
        vector<vector<int>> children(n + 1);
        for (int i = 2; i <= n; ++i) {
            children[parents[i - 2]].push_back(i);
        }

        // BFS to calculate distances
        vector<int> d(n + 1, 0);
        queue<int> q;
        q.push(1);
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int u : children[v]) {
                d[u] = d[v] + 1;
                q.push(u);
            }
        }

        // Group vertices by distance
        int max_d = *max_element(d.begin(), d.end());
        vector<vector<int>> levels(max_d + 1);
        for (int u = 1; u <= n; ++u) {
            levels[d[u]].push_back(u);
        }

        // DP array
        vector<int> dp(n + 1, 0);
        dp[1] = 1;

        // Iterate over levels
        for (int l = 1; l <= max_d; ++l) {
            for (int u : levels[l]) {
                for (int v : levels[l - 1]) {
                    // Check if u is not a child of v
                    bool is_child = false;
                    for (int child : children[v]) {
                        if (child == u) {
                            is_child = true;
                            break;
                        }
                    }
                    if (!is_child) {
                        dp[u] = (dp[u] + dp[v]) % MOD;
                    }
                }
            }
        }

        // Sum all dp[u]
        int total = 0;
        for (int u = 1; u <= n; ++u) {
            total = (total + dp[u]) % MOD;
        }
        cout << total << "\n";
    }

    return 0;
}