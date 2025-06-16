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
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int ev=-1,ls_eve=-1;

    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            ev=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]%2==0){
            ls_eve=i;
            break;
        }
    }
    int cnt1=-1;
    if(ev>ls_eve){
        cnt1=-1;
    }
    else{
        cnt1=ev+(n-ls_eve-1);
    }
    int od=-1,ls_od=-1;

    for(int i=0;i<n;i++){
        if(v[i]%2){
            od=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]%2){
            ls_od=i;
            break;
        }
    }
    int cnt2=-1;
    if(od>ls_od){
        cnt2=-1;
    }
    else{
        cnt2=od+(n-ls_od-1);
    }

    if(cnt1==-1){
        cout<<cnt2<<endl;
    }else if(cnt2==-1){
        cout<<cnt1<<endl;
    }else{
        cout<<min(cnt1,cnt2)<<endl;
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