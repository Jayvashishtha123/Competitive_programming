/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 30/03/2025                             
* Time: 11:13:11                             
* Problem: A_Kamilka_and_the_Sheep.cpp              
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
    int n;
    cin >> n;
    vi v(n), evenNumbers;
    for (int i = 0; i < n; i++) cin >> v[i];
    int mini = -INF;
    sort(v.rbegin(),v.rend());
    for (int i = 0; i < n; i++) {
        for(int j=i+1;j<n;j++){
            int val=v[i]-v[j];
            mini=max(mini,val);
        }
    }
    cout << (mini) << endl;
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