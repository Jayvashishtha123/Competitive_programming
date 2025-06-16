/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 21/03/2025                             
* Time: 15:49:36                             
* Problem: C_Sakurako_s_Field_Trip.cpp              
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
    int n;cin>>n;
    vi v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1;i<=n;i++){
        if(v[i-1]==v[i] || v[n-i+2]==v[n-i+1]){
           swap(v[i],v[n-i+1]);
        }
    }
    int ans=0;
    for(int i=1;i<n;i++){
        if(v[i]==v[i+1])ans++;
    }
    cout<<(ans)<<endl;
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