/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 08/03/2025                             
* Time: 20:39:12                             
* Problem: Coin_Combinations_II.cpp              
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
    int n,x;cin>>n>>x;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    vi dp(x+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=v[i];j<=x;j++){
            dp[j]=(dp[j]+dp[j-v[i]])%MOD;
        }
    }
    cout<<dp[x]<<endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
        solve();
    return 0;
}