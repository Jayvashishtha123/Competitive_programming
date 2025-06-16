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
    int n,k;cin>>n>>k;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vi vv(n,0);
    for(int i=0;i<n-1;i++){
        if(v[i]<2*v[i+1]){
            vv[i]=1;
        }
    }
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=vv[i];
    }
    int cnt=0;
    if(ans==k)cnt++;
    for(int j=k;j<n;j++){
        ans+=vv[j]-vv[j-k];
        if(ans==k)cnt++;
    }
    cout<<cnt<<endl;
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