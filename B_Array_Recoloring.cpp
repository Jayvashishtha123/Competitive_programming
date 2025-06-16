/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 17/03/2025                             
* Time: 20:14:26                             
* Problem: B_Array_Recoloring.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    if (n == 1) {
        cout << v[0] << endl;
        return;
    }
    if (n == 2) {
        cout << v[0]+v[1] << endl;
        return;
    }
    if (k == 1) {
        int mxs = v[0] + v[n - 1];
        int mxm = *max_element(v.begin() + 1, v.end() - 1);
        cout << max(mxs, mxm + max(v[0], v[n - 1])) << endl;
        return;
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for (int i = 0; i <= k; ++i) {
        ans += v[i];
    }
    cout << ans << endl;
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}