/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 16/03/2025                             
* Time: 19:14:39                             
* Problem: A_Binary_Matrix.cpp              
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
    int n,m;cin>>n>>m;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int check=0;
        for(int j=0;j<m;j++){
            int vv= v[i][j]-'0';
            check^=vv;
        }
        if(check!=0)x++;
    }
    for(int i=0;i<m;i++){
        int check=0;
        for(int j=0;j<n;j++){
            int vv= v[j][i]-'0';
            check^=vv;
        }
        if(check!=0)y++;
    }
    cout<<max(x,y)<<endl;
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