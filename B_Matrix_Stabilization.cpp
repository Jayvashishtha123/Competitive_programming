#include "bits/stdc++.h"
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
    int n,m;
    cin>> n >> m;
    vvi a(n, vi(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vvi ans(n,vi (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int maxi=-1;
            if(i>0) maxi= max(maxi,a[i-1][j]);
            if(i<n-1) maxi= max(maxi,a[i+1][j]);
            if(j>0) maxi= max(maxi,a[i][j-1]);
            if(j<m-1) maxi= max(maxi,a[i][j+1]);
          if(a[i][j]>maxi){
                ans[i][j]=maxi;
            }
            else{
                ans[i][j]=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   
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