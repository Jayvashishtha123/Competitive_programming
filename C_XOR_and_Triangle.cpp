#include <bits/stdc++.h>
using namespace std;
void solve() {
    int x;
    cin >> x;
    int low = 1, high = x - 1;
    int result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int y = mid;
        int xorVal = x ^ y;
        if (x + y > xorVal && x + xorVal > y && y + xorVal > x) {
            result = y;
            break;
        } else if (x + y <= xorVal) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << result << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}