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
    int n,m,k;cin>> n >> m >> k;
    vvi v(n, vi(m));
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(val==k+1){
                val=1;
            }
            v[i][j]=val;
            val++;
        }
    }
   if(m%k==0){
    for(int i=1;i<n;i+=2){
        reverse(v[i].begin(),v[i].end());
        for(int j=0;j<m;j++){
            if(v[i][j]==v[i-1][j]){
                swap(v[i][j],v[i][j+1]);
            }
        }
    }
   }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
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