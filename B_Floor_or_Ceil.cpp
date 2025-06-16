/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 16/03/2025                             
* Time: 18:26:49                             
* Problem: B_Floor_or_Ceil.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
/********************************** SOLUTION **********************************/
void solve() {
    int x, n, m;
    cin >> x >> n >> m;
    int ans1 = x;
    int mm = min(m, 30LL);
    for (int i = 0; i < mm; i++) {
        ans1 = (ans1 + 1) >> 1;
        if (ans1 == 1) break;
    }
    for (int i = 0; i < min(n, 30LL); i++) {
        ans1 >>= 1;
        if (ans1 == 0) break;
    }
    int ans2 = x;
    for (int i = 0; i < min(n, 30LL); i++) {
        ans2 >>= 1;
        if (ans2 == 0) break;
    }
    for (int i = 0; i < min(m, 30LL); i++) {
        ans2 = (ans2 + 1) >> 1;
        if (ans2 == 1) break;
    }
    cout << ans1 << " " << ans2 << endl;
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
