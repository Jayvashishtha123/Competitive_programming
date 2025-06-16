/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/02/2025                             
* Time: 23:25:55                             
* Problem: B_Having_Been_a_Treasurer_in_the_Past_I_Help_Goblins_Deceive.cpp              
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
    string s;cin>>s;
    int _=0,__=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-')_++;
        else __++;
    }
    int ans=(_/2)*((_+1)/2);
    cout<<ans*__<<endl;

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