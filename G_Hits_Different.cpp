/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 18/02/2025                             
* Time: 00:56:49                             
* Problem: G_Hits_Different.cpp              
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
vector<vector<int>>v(2000,vector<int> (2000,0));
int cnt=1;
  vi ans(2000009);
/********************************** SOLUTION **********************************/
void solve() {
    int n;cin>>n;
    cout<<ans[n]<<endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t;
     for(int i=1;i<2000;i++){
        for(int j=i-1;j>=1;j--){
            v[j][i-j]=v[j][i-j-1]+v[j-1][i-j]-v[j-1][i-j-1]+cnt*cnt;
            ans[cnt]=v[j][i-j];
            cnt++;
        }
    }
    while (t--) {
        solve();
    }
    return 0;
}