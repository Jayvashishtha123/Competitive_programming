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
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int r=0;
    for(int i=0;i<n;i++){
        if(v[min(n-1,r+1)]<=v[min(n-1,i+1)]){
            r=i;
        }
    }
    vi ans;
    for(int i=r+1;i<n;i++){
        ans.push_back(v[i]);
    }
    ans.push_back(v[r]);
    for(int j=r-1;j>=0;j--){
        if(v[j]>v[0]){
            ans.push_back(v[j]);
        }else{
            for(int k=0;k<=j;k++){
                ans.push_back(v[k]);
            }
            break;
        }
    }
    for(auto i:ans){
        cout<<i<<' ';
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