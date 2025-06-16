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
    int fst=INF,snd=-1;
    int fst2=-1,snd2=INF;
    while(n--){
        int x,y;cin>>x>>y;
        fst=min(fst,y);
        fst2=max(fst2,x);
    }
    int m;cin>>m;
    while(m--){
        int x,y;cin>>x>>y;
        snd=max(snd,x);
        snd2=min(snd2,y);
    }
    if(fst<snd && fst2> snd2){
        cout<<max(fst2-snd2,snd-fst)<<endl;
    }else if(fst2>snd2){
        cout<<fst2-snd2<<endl;
    }else if(fst<snd){
        cout<<snd-fst<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}