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
    string s;cin>>s;
    int cnta=0,cntb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            cnta++;
        }else{
            cntb++;
        }
    }
    if(s[0]!=s[n-1]){
        char ch= s[n-1];
        if(ch=='A'){
            if( s[n-2]=='A')
            cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }else if(ch=='B'){
            if( cntb>1)
            cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
    }else{
        if(s[0]=='A'){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
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