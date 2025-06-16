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
    int n,m;cin>>n>>m;
    vi v(n),vv(m);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<m;i++)cin>>vv[i];
    int i=0,j=0;
    vi pre(m,INF);
    while(i<n && j<m){
        if(v[i]>=vv[j]){
            pre[j]=i;
            j++;
        }
        i++;
    }
    if(j==m){
        cout<<0<<endl;
        return;
    }
    int x=n-1,y=m-1;
    vi suf(m,-1);
    while(x>=0 && y>=0){
        if(v[x]>=vv[y]){
            suf[y]=x;
            y--;
        }
        x--;
    }
    if(y<0){
        cout<<0<<endl;
        return;
    }
    int maxi=INT_MAX;
    if (suf[1] != -1) {
        maxi = min(maxi, vv[0]);
    }
    if (pre[m - 2] != INF) {
        maxi = min(maxi, vv[m - 1]);
    }
    for(int i=1;i<m-1;i++){
        if(pre[i-1]<suf[i+1]){
            maxi=min(maxi,vv[i]);
        }
    }
    if(maxi==INT_MAX)cout<<-1<<endl;
    else cout<<maxi<<endl;

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