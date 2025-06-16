/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 15/02/2025                             *
*                             Time: 12:20:48                             *
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
    int n,t;cin>>n>>t;
    vi v(n),vv(n);
    for(int i=0;i<n;i++){
        cin>>v[i]>>vv[i];
    }
    vi res;
    int l=0,r=n;
    while(l<r){
        int mid=(l+r+1)/2;
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            if(v[i]>=mid){
                vp.push_back({vv[i],i});
            }
        }
        bool is=false;
       sort(vp.begin(),vp.end());
       if(vp.size()>=mid){
        int sum=0;
        for(int i=0;i<mid;i++){
            sum+=vp[i].first;
        }
        if(sum<=t){
            is=true;
        res.resize(mid);
        for(int i=0;i<mid;i++){
            res[i]=vp[i].second;
        }
       }
       }
       if(is){
        l=mid;
       }else{
        r=mid-1;
       }
    }
    cout<<res.size()<<endl;
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]+1<<" ";
    }
    cout<<endl;
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