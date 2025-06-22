/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
// #define LOCAL
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
void solve(istream &cin, ostream &cout) {
    int n,s;cin>>n>>s;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];


    int mini=0,maxi=0;
    for(int i=0;i<n;i++){
        if(v[i]<s){
            mini = max(mini,s-v[i]);
        }else if(v[i]>s){
            maxi= max(maxi,v[i]-s);
        }
    }

    int ans1= 2*mini+maxi;
    int ans2 = 2*maxi+mini;
    cout<<min(ans1,ans2)<<endl;


}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve(cin,cout);
    }
    return 0;
}