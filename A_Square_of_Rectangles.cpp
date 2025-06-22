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
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(l1==l2 && l2==l3 && l3==l1){
        int len = l1;
        int bra = b1+b2+b3;
        if(len==bra){
            cout<<"YES"<<endl;
            return;
        }
    }
     if(l1 == (l2+l3) && (b2==b3)){
        int len = l1;
        int bra = b1+b2;
        if(len==bra){
            cout<<"YES"<<endl;
            return;
        }
    }
    
    if(b1==b2 && b2==b3 && b3==b1){
        int len = l1+l2+l3;
        int bra = b1;
        if(len==bra){
            cout<<"YES"<<endl;
            return;
        }
    }
     if(b1 == (b2+b3) && (l2==l3)){
        int len = l1+l2;
        int bra = b1;
        if(len==bra){
            cout<<"YES"<<endl;
            return;
        }
    }
   cout<<"NO"<<endl;
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