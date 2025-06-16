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
    int n,k;cin>>n>>k;
    vi v(n);int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.rbegin(),v.rend());
    int diff= v[0] - v[n-1] -1 ;
    int diff2= v[1] - v[n-1];
    if(diff>k){
        cout<<"Jerry"<<endl;
        return;
    }
    if(diff2>k){
        cout<<"Jerry"<<endl;
        return;
    }

    if(sum%2){
        cout<<"Tom"<<endl;

    }else{
        cout<<"Jerry"<<endl;
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