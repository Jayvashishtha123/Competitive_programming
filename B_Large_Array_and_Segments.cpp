#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
const int MOD = 1e9 + 7;
/********************************** SOLUTION **********************************/
void solve() {
   int n,k,x;cin>>n>>k>>x;
   vi v(n);int sum=0;
   for(int i=0;i<n;i++)cin>>v[i],sum+=v[i];
   if(sum*k < x){
    cout<<0<<endl;
    return;
   }
   if(sum*k == x){
    cout<<1<<endl;
    return;
   }
   int val=x/sum;
   int ans= n*(k-val);
   if(val*sum==x){
    cout<<ans+1<<endl;
    return;
   }
   if((val*sum)!=x) ans-=n;
   int cnt=x%sum;int dm=0;
   reverse(v.begin(),v.end());
   for(int i=0;i<n;i++){
    dm+=v[i];
    if(dm>=cnt){
        ans+=n-i;
        break;
    }
   }
   cout<<ans<<endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    IOS;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
