/**********************************🤔🤔🤔🤔🤔🤔🤔**********************************/
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
vi mx(200000),mn(200000);
vvi tree;vi v(200000);
void dfs(int x,int y){
    for(int i=0;i<tree[x].size();i++){
        if(tree[x][i]==y)continue;
        int idx=tree[x][i];
        mx[idx]=max(v[idx]-mn[x],v[idx]);
        mn[idx]=min(v[idx]-mx[x],v[idx]);
        dfs(tree[x][i],x);
    }
}
void solve() {
    int n;cin>>n;
    tree.assign(n, vi());
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n-1;i++){
        int x,y;cin>>x>>y;
       tree[x-1].push_back(y-1);
       tree[y-1].push_back(x-1);
    }
    mx[0]=v[0];mn[0]=v[0];
    dfs(0,-1);

    for(int i=0;i<n;i++){
        cout<<mx[i]<<" ";
    }
    cout<<endl;
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