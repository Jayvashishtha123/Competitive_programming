/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 19/03/2025                             
* Time: 00:29:56                             
* Problem: B_Make_Three_Regions.cpp              
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
    string s1,s2;cin>>s1>>s2;
    int ans=0;
    for(int i=1;i<n-1;i++){
        if(s1[i]=='.' && s1[i-1]=='.' && s1[i+1]=='.' && s2[i]=='.' && s2[i-1]=='x' && s2[i+1]=='x')ans++;
        if(s2[i]=='.' && s2[i-1]=='.' && s2[i+1]=='.' && s1[i]=='.' && s1[i-1]=='x' && s1[i+1]=='x')ans++;
    }
    cout<<ans<<endl;
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