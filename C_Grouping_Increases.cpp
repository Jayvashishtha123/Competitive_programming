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
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n<=2){
        cout<<0<<endl;
        return;
    }
    int fst=v[0],snd=0;
    int cnt=0;
    int i=1;
    while(v[i]<=fst && i<n){fst=v[i];i++;}
    if (i == n-1) {
    cout << 0 << endl;
    return;
}
    snd=v[i];
    while(i<n){
        if(v[i]>fst && v[i]>snd){
            cnt++;
            if(fst<snd)fst=v[i];
            else snd=v[i];
        }else if(v[i]<=fst&& v[i]<=snd){
            if(fst<snd)fst=v[i];
            else snd=v[i];
        }else{
            if(v[i]>fst){
                snd=v[i];
            }else{
                fst=v[i];
            }
            
        }
        

        i++;
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