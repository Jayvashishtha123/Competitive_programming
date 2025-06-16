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
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
     if(!is_sorted(v.begin(),v.end()) && !is_sorted(v.rbegin(),v.rend())){
        cout<<"NO"<<endl;
        return;
     }
     sort(v.begin(),v.end());
     
     int cd=v[1]-v[0];
     for(int i=1;i<n;i++){
        if(v[i]-v[i-1]!= cd){
            cout<<"NO"<<endl;
            return;
        }
     }
     for(int i=0;i<n;i++){
        v[i] -= (i+1)*cd;
        if(v[i]<0){
            cout<<"NO"<<endl;
            return;
        }
     }
     int dv=n+1;
     for(int i=0;i<n;i++){
        if(v[i]%dv !=0 ){
            cout<<"NO"<<endl;
            return;
        }

     }
     cout<<"YES"<<endl;

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