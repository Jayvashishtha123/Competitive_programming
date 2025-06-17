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
    int n;cin>>n;
    string s;cin>>s;
    
    vector<pair<int,int>> switches(n,{0,0});
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            switches[i].first=1;
        }
    }
    
    if(n>=2){
    for(int i=0;i<n;i++){
        if(s[i]=='1')continue;
        if(i==0 ){
            if(s[i+1]=='0'){
                cout<<"No"<<endl;
                return;
            }else{
                switches[i+1].second=1;
            }
        }else if(i==n-1){
            if(s[i-1]=='0'){
                cout<<"No"<<endl;
                return;
            }else{
                if(switches[i-1].second==0)
                switches[i-1].second=1;
                else{
                    cout<<"No"<<endl;
                    return;
                }
            }
        }else{
            
            if(s[i-1]=='1' && switches[i-1].second==0){
                switches[i-1].second=1;
            }else if(s[i+1]=='1' && switches[i+1].second==0){
                switches[i+1].second=1;
            }else{
                cout<<"No"<<endl;
                return;
            }
        }
    }
    
    cout<<"Yes"<<endl;
    }
    else{
        if(s[0]=='0')cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
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