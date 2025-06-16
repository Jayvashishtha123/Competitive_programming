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
const int MOD = 998244353;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
int pow(int x, int p){
   int res=1;
   while(p){
    if(p%2){
        res=(res*x)%MOD;
    }
    p>>=1;
    x=(x*x)%MOD;
   }
   return res;
}
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=(ans*i)%MOD;
    }
    return ans;
}
void solve() {
    vi v(26);
    int s=0;
    for(int i=0;i<26;i++) {
        cin>>v[i];
        s+=v[i];
    }
    vi dp(s+1,0);
    dp[0]=1;
    for(int i=0;i<26;i++){
        if(v[i]==0)continue;
        for(int j=s;j>=0;j--){
            if(j+v[i]<=s){
                dp[j+v[i]]=(dp[j+v[i]]+dp[j])%MOD;
            }
        }
    }
    int ans= dp[s/2];
    ans= ans*fact(s/2)%MOD;
    ans= ans*fact((s+1)/2)%MOD;
    for(int i=0;i<26;i++){
        if(v[i]==0)continue;
        ans= (ans/fact(v[i]));
    }
    cout<<ans%MOD<<endl;
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