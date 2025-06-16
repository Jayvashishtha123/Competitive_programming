/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 22/03/2025                             
* Time: 22:50:44                             
* Problem: C_Serval_and_The_Formula.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
void solve() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << -1 << endl;
        return;
    }
    int maxi = max(a, b);
    int p = 31 - __builtin_clz(maxi);  
    int n = 1LL << (p + 1);  
    int s = n - maxi;
    cout<<s <<endl;
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