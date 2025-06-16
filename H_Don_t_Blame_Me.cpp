/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 18/02/2025                             
* Time: 09:42:33                             
* Problem: H_Don_t_Blame_Me.cpp              
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
const int N = 1e9 + 7;
/********************************** SOLUTION **********************************/
void solve() {
    int n,k;cin>>n>>k;
    vi v(n+1);
    for(int i=1;i<n+1;i++)cin>>v[i];
    vvi dp(n+1,vi (64));
    for(int i=0;i<64;i++){
        if(__builtin_popcountll(i)==k){
            dp[0][i]=1;
        }else{
            dp[0][i]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=0;j<=63;j++){
            int x= dp[i-1][j];
            int y=dp[i-1][j&v[i]];
            dp[i][j]=(x+y)%N;
        }
    }
    int ans=dp[n][63];
    if(k==6)ans--;
    cout<<ans<<endl;
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