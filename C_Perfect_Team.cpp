/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 14/02/2025                             *
*                             Time: 22:13:40                             *
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
    int c,m,x;cin>>c>>m>>x;
    int n=c+m+x;
    int l=0,r=n/3+1;
    while(l<r){
        int mid=(l+r+1)/2;
        if(mid<=c && mid<=m && 3*mid<=n){
            l=mid;
        }else r=mid-1;
    }
    cout<<l<<endl;
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