/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 14/02/2025                             *
*                             Time: 22:39:05                             *
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
const int N = 5e9;
/********************************** SOLUTION **********************************/
void solve() {
    int n,m;cin>>n>>m;
    vi v(n),vv(m);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int j=0;j<m;j++)cin>>vv[j];
    int l=-1,r=N;
    while(l<r){
        int mid=(l+r)/2;
        bool is= true;
        int p1=0,p2=0;
        for(;p1<n;p1++){
            while(p2<m && v[p1]-vv[p2]>mid){
                p2++;
                if(p2==m)is=false;
            }
        }
        if(!is)l=mid+1;
        else r=mid;
    }
    cout<<l<<endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}