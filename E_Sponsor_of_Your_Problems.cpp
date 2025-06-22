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
     int l, r; cin >> l >> r;
    string L = to_string(l);
    string R = to_string(r);
    int cnt=0;int prev1=0,prev2=0;
    for(int i=0;i<L.size();i++){
         prev1 =prev1*10 +  (L[i]-'0');
         prev2 =prev2*10 + (R[i]-'0');
        if(abs(prev2-prev1)>1){
            cout<<cnt<<endl;
            return;
        }else if((prev2-prev1)==1)cnt++;
        else cnt+=2;
    }
    cout<<cnt<<endl;
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