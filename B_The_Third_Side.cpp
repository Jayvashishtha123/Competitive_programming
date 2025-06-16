#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    // Read input matrix
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            matrix[i][j] = row[j] - '0';
        }
    }

    vector<int> rowXOR(n, 0), colXOR(m, 0);

    // Calculate row and column XOR values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rowXOR[i] ^= matrix[i][j];
            colXOR[j] ^= matrix[i][j];
        }
    }

    int rowViolations = count(rowXOR.begin(), rowXOR.end(), 1);
    int colViolations = count(colXOR.begin(), colXOR.end(), 1);

    // The minimum number of changes required
    cout << max(rowViolations, colViolations) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
