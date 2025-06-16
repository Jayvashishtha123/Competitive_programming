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
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
void solve() {
    int n,q;cin>>n>>q;
    vi v(n);
    int maxi=INT_MIN,mini=INT_MAX,max_idx=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>maxi){
        maxi=max(maxi,v[i]);
        max_idx=i;    
    }
        mini=min(mini,v[i]);
    }
    while(q--){
        int i,k;cin>>i>>k;
        i--;
        int val= v[i];
        if(val==maxi){
            k-= max(0LL,i-1);
            cout<<max(0LL,k)<<endl;
            continue;
        }
        if(val==mini || max_idx < i){
            cout<<0<<endl;
            continue;
        }
        int ans= max_idx - i - 1;
        


        
           
        
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