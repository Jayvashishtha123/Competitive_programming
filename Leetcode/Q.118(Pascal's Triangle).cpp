#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> generateRow(int n) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int col = 1; col < n; col++) {
            ans = ans * (n - col);
            ans /= col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int numRows;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = sol.generate(numRows);

    // Output the generated Pascal's Triangle
    cout << "Generated Pascal's Triangle:" << endl;
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
