/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 27/02/2025                             
* Problem: Robot Zero Crossing
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

/********************************** SOLUTION **********************************/
void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    int steps = 0;
    bool reached_zero = false;
        for (int i = 0; i < n; i++) {
        if (s[i] == 'L') x--;
        else x++;
        steps++;
        k--;

        if (x == 0) {
            reached_zero = true;
            break;
        }
    }
    if (!reached_zero) {
        cout << 0 << endl;
        return;
    }

    int cycle_length = 0, cycle_zero_count = 0;
    int temp_x = x;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') temp_x--;
        else temp_x++;
        cycle_length++;

        if (temp_x == 0) {
            cycle_zero_count++;
            break;
        }
    }

    if (cycle_zero_count > 0) {
        cout << 1 + (k / cycle_length) << endl;
    } else {
        cout << 1 << endl;
    }
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    IOS;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
