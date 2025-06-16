#include <bits/stdc++.h>
using namespace std;

long long countFriendships(const vector<int>& heights) {
    long long friendships = 0;
    unordered_map<int, int> visited; // Tracks visited heights within a component

    int componentSize = 0;
    for (int h : heights) {
        if (!visited[h]) {
            visited[h] = 1; // Mark height as visited
            componentSize++;
        } else {
            // Component ends, calculate friendships for the current component
            friendships += (componentSize * (componentSize - 1)) / 2;
            componentSize = 1; // Reset component size for a new component
            visited.clear();
            visited[h] = 1; // Start new component
        }
    }

    // Add friendships for the last component
    friendships += (componentSize * (componentSize - 1)) / 2;

    return friendships;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of mountains

        vector<int> heights(N);
        for (int i = 0; i < N; i++) {
            cin >> heights[i];
        }

        // Count friendships for the current test case
        cout << countFriendships(heights) << "\n";
    }

    return 0;
}
