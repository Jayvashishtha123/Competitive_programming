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
const int N = 200003;
vvi pre(N,vector<int> (30));
/********************************** SOLUTION **********************************/
void solve() {
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int q;cin>>q;
    // memset(pre, 0, sizeof(pre)); 
    for(int i=0;i<n;i++){
        for(int j=0;j<30;j++){
            if(v[i]&(1<<j)){
                pre[i+1][j]=pre[i][j]+1;
            }else{
                pre[i+1][j]=pre[i][j];
            }
        }
    }
    for(int i=0;i<q;i++){
        int k,l;cin>>l>>k;
        if(v[l-1]<k){
            cout<<-1<<' ';
            continue;
        }
        int low=l,hi=n;
        int ans=l;
        while(low<=hi){
            int mid=(low+hi)/2;
            int nm=0;
            for(int j=0;j<30;j++){
                if(pre[mid][j]-pre[l-1][j]==mid-l+1){
                    nm += (1<<j);
                }
            }
            if(nm>=k){
                low=mid+1;
                ans=max(ans,mid);
            }else{
                hi=mid-1;
            }
        }
        cout<<ans<<' ';
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