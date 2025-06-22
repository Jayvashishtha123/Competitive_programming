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
    int n,m;cin>>n>>m;
    vvi v(n,vi (m));
    int maxi=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            maxi=max(maxi,v[i][j]);
        }
    }
    int cnt=0;
    vi row(n,0),col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==maxi){
                row[i]++;
                col[j]++;
                cnt++;
            }
        }
    }
    bool is=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                int ttl= row[i]+col[j];
                int diff=ttl-(v[i][j]==maxi?1:0);
                if(diff==cnt){
                    is=true;
                    break;
                }

            
        }
        if(is)break;
    }


    if(is){
        cout<<maxi-1<<endl;
    }
    else cout<<maxi<<endl;



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