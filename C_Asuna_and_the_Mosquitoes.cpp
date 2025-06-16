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
    int n;cin>>n;
   vi v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int maxi=*max_element(v.begin(),v.end());
   int odd=0,even=0;
   for(int i=0;i<n;i++){
    if(v[i]%2)odd++;
    else even++;
   }
   if(!odd || !even){
    cout<<maxi<<endl;
    return;
   }
   int ans=0;
   for(int i=0;i<n;i++){
    ans+= v[i];
   }
   odd--;
   ans-=odd;
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