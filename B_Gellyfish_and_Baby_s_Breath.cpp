/**********************************let's begin**********************************/
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
const int MOD = 998244353;
const int INF = 1e18;
const int N = 500005;
 vi pow2(N);
/********************************** SOLUTION **********************************/
void solve() {
    int n;cin>>n;
    vi v(n),vv(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>vv[i];
   
    
    vi r(n,0);
    int idx1=0;
    int idx2=0;

    for(int i=0;i<n;i++){
        if(v[i]>v[idx1]){
            idx1=i;
        }
        if(vv[i]>vv[idx2]){
            idx2=i;
        }

        if(v[idx1]>vv[idx2] || (v[idx1]==vv[idx2] && v[i-idx2] < vv[i-idx1] )){
            r[i]=(pow2[v[idx1]]+ pow2[vv[i-idx1]])%MOD;
        }else r[i]= (pow2[vv[idx2]]+ pow2[v[i-idx2]])%MOD;
    }
    for(int i=0;i<n;i++){
        cout<<r[i]<<' ';
    }
    cout<<endl;


}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t;
    pow2[0]=1;
    for(int i=1;i<N;i++){
        pow2[i]=(pow2[i-1]*2)%MOD;
    }
    while (t--) {
        solve();
    }
    return 0;
}