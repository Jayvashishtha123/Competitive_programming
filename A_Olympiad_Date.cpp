/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/03/2025                             
* Time: 20:25:15                             
* Problem: A_Olympiad_Date.cpp              
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
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int ans=INT_MAX;
      for(int i=0;i<n;i++){
        int z=0;
        int o=0;
        int tw=0;
        int th=0;
        int f=0;
        for(int j=i;j<n;j++){
            if(a[j]==0)z++;
            if(a[j]==1)o++;
            if(a[j]==2)tw++;
            if(a[j]==3)th++;
            if(a[j]==5)f++;
            if(z>=3 && o>=1 && tw>=2 && th>=1 && f>=1){
                ans=min(ans,j+1);
            }
        }
      }
      if(ans==INT_MAX){
        cout<<0<<endl;
        return;
      }

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