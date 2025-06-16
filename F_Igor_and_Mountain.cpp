/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 27/03/2025                             
* Time: 12:07:11                             
* Problem: F_Igor_and_Mountain.cpp              
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
const int MOD = 998244353;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
void solve() {
    int n,m,d;cin>>n>>m>>d;
    vector<string> v(n);
    for(int i=n-1;i>=0;i--)cin>>v[i];
    int x=sqrt(d*d - 1);
    vi prevPre(m+1,0),currPre(m+1,0);
    for(int i=1;i<=m;i++){
        if(v[0][i-1]=='X'){
            prevPre[i]=1;
        }
        prevPre[i]=( prevPre[i]+prevPre[i-1])%MOD;
    }
    for(int i=1;i<=m;i++){
        int l=max(1LL,i-d), r=min(m,i+d);
        if(v[0][i-1]=='X'){
            currPre[i]=(prevPre[r]-prevPre[l-1]+MOD)%MOD;
        }
        currPre[i]=(currPre[i-1]+currPre[i])%MOD;
    }
    for(int i=2;i<=n;i++){
        vi curr(m+1,0);
        for(int j=1;j<=m;j++){
            if(v[i-1][j-1]=='X'){
                int l=max(1LL,j-x),r=min(m,j+x);
                curr[j]=(currPre[r]-currPre[l-1]+MOD)%MOD;
            }
            curr[j]=(curr[j-1]+curr[j])%MOD;
        }
        for(int j=1;j<=m;j++){
            if(v[i-1][j-1]=='X'){
                int l=max(1LL,j-d),r=min(m,j+d);
                currPre[j]=(curr[r]-curr[l-1]+MOD)%MOD;
            }else currPre[j]=0;
            currPre[j]=(currPre[j-1]+currPre[j])%MOD;
        }
    }
    cout<<currPre[m]<<endl;
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