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
    vvi v(n,vi(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    vi per(2*n);
    unordered_set<int> s;
    vi anss(2*n);int j=1;
    for(int i=0;i<n;i++){
            s.insert(v[0][i]);
            anss[j]=v[0][i];
            j++;
    }
    for(int i=1;i<n;i++){
        s.insert(v[i][n-1]);
        anss[j]=v[i][n-1];
        j++;
}
int fst=1;
while(fst<=2*n){
    if(s.find(fst)==s.end()){
        anss[0]=fst;
        break;
    }
    fst++;
}
    for(auto i:anss){
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