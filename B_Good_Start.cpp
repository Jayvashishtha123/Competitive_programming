/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define LOCAL
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
    int w,h,a,b;cin>>w>>h>>a>>b;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    int diff= abs(y1-y2);
    int diff2= abs(x1-x2);
    bool flag1=false,flag2=false;
    if(diff%b==0 ){
        if(y1!=y2 || diff2%a==0){
            flag1=true;
        }
    }
    if(diff2%a==0){
        if(x1!=x2 || diff%b==0){
            flag2=true;
        }
    }
    if(flag1 || flag2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

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