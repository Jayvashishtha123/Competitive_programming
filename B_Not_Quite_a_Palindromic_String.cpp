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
int maxi=INT_MIN;
/********************************** SOLUTION **********************************/
void solve() {
    int mood;cin>>mood;
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int one=0,two=0;
    int variable=INT_MAX;
    for(int i=0;i<n;i++){
        if(s[i]=='1')one++;
        else two++;
    }
    while(k--){
        if(two>=one)two-=2;
        else one-=2;
    }
    if(two==one){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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