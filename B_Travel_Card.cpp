/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 15/02/2025                             *
*                             Time: 10:27:28                             *
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
    int t;cin>>t;
    vi v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    vi dp(N);
    for(int i=0;i<t;i++){
        int t1=upper_bound(v.begin(),v.end(),v[i]-90)-v.begin();
        int t2=upper_bound(v.begin(),v.end(),v[i]-1440)-v.begin();
        dp[i]=(i?dp[i-1]:0)+20;
        dp[i]=min(dp[i],(t1?dp[t1-1]:0)+50);
        dp[i]=min(dp[i],(t2?dp[t2-1]:0)+120);
        cout<<dp[i]-(i?dp[i-1]:0)<<endl;
    }
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