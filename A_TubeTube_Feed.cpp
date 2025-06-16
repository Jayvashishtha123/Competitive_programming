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
    int n,t;cin>>n>>t;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++) cin>>b[j];
    int idx=-1,maxi=0;
    for(int i=0;i<n;i++){
        if((t-i)>=a[i]){
            if(b[i]>=maxi){
                maxi=b[i];
                idx=i;
            }
        }
    }
    if(idx==-1)cout<<-1<<endl;
    else cout<<idx+1<<endl;

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