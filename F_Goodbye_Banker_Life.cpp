/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 27/02/2025                             
* Time: 16:24:34                             
* Problem: F_Goodbye_Banker_Life.cpp              
******************************************************************************/
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
    int n,k;cin>>n>>k;
    int cnt=0;
    vi v(n,k);
    for(int i=1;i<n-1;i++){
        int xxx=n-i;
        while(!(xxx&1)){
            cnt++;
            xxx/=2;
        }
        int xxy=i;
        while(!(xxy&1)){
            cnt--;
            xxy/=2;
        }
        if(cnt)v[i]=0;
    }
    for(auto i:v)cout<<i<<" ";
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