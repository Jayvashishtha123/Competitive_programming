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
    int w,h,a,b;cin>>w>>h>>a>>b;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    // x1 += a;
    // y1 += b;

    int width = (x1-x2);
    int height=(y1-y2);

    bool ans=false;

    if(height%b==0){
        if(y1!=y2){
            ans=true;
        }else{
            if(width%a==0)ans=true;
        }
    }

    bool ans2=false;

     if(width%a==0){
        if(x1!=x2){
            ans2=true;
        }else{
            if(height%b==0)ans2=true;
        }
    }

    if(ans || ans2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    // if(x2>=x1 && y2>=y1){
    //     if ( height%b==0 || height%a==0 || width%a==0 || height%b==0){
    //     cout<<"YES"<<endl;
    // }else cout<<"NO"<<endl;
    // }
    // else if(x1<x2){
    //     if(width%a==0 || width%b==0){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }
    // }else if(y2<y1){
    //       if(height%a==0 || height%b==0){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }
    // }else cout<<"NO"<<endl;
    

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