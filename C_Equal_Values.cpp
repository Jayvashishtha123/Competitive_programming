/**********************************let's begin**********************************/
#include "bits/stdc++.h"
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
     int n,m;cin>>n>>m;
    vi fibo(20);
    fibo[0]=1,fibo[1]=2;
    for(int i=2;i<20;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int len=fibo[n-1];
    int rem=fibo[n-2];
    string ans="";
    while(m--){
        int w,l,h;cin>>w>>l>>h;
        int len_rem = l-len;
        int wid_rem= w-len;
 
        if(len_rem < 0 || wid_rem<0){
            ans+= '0';
            continue;
        }
        else if(len_rem>=rem || wid_rem>=rem ){
            if(h>=len){
                ans+='1';
            }else{
                ans+='0';
            }
        }
        else if(h>= (len+rem)){
            ans+='1';
 
        }else{
            ans+='0';
        }
    }
    cout<<ans<<endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now(); // Start measuring time
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now(); // End measuring time
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; // Print execution time
    return 0;
}
