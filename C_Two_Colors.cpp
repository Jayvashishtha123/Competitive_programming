/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 17/03/2025                             
* Time: 20:40:15                             
* Problem: C_Two_Colors.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
void solve() {
    int n, m;
    cin >> n >> m;
    vi a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
        a[i]=min(a[i],n-1);
    }
    sort(all(a));
    vi suf(m);
    suf[m - 1] = a[m - 1];
    for (int i = m - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + a[i];
    }
    int ans = 0;
    for (int i = 0; i < m - 1; i++) {
        int idx = lower_bound(a.begin() + i + 1, a.end(), n - a[i]) - a.begin();
        int x=(m-idx);
        if (idx != m) {
            ans += 2*(suf[idx]+x*(a[i]-n+1));
        }
    }
    cout << ans << endl;
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
