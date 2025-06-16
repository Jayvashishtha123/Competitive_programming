/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 08/03/2025                             
* Time: 10:55:17                             
* Problem: Dice_Combinations.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define int long long
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
const int N = 1e9 + 7;
/********************************** SOLUTION **********************************/
// int dpp(vi dp,int x){
//     if(x==0)return 1;
//     if(x<0)return 0;
//     if(dp[x]!=-1)return dp[x];
//     int res=0;
//     for(int i=1;i<=6;i++){
//         res+= dpp(dp,x-i);
//     }
//     return dp[x]=res;
// }
void solve() {
    int n;cin>>n;
    vi dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
    }
    cout<<dp[n]%MOD<<endl;

}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}