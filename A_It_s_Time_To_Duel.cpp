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
    int n;cin >> n;
    vi v(n);int s=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s+=v[i];
    }
    if(n==2){
        if(v[0]==v[1]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        return;
    }
    bool is=false;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1] && v[i]==0){
            is=true;
            break;
        }
    }
    
    if(is || s==n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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