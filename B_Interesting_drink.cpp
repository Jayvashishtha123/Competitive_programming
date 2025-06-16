/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 14/02/2025                             *
*                             Time: 19:08:23                             *
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
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int q;cin>>q;
    sort(v.begin(),v.end());
    while(q--){
        int x;cin>>x;
        int i=0,j=n-1;
        while(i<=j){
            int m=(i+j)/2;
            if(v[m]<=x){
                i=m+1;
            }else{
                j=m-1;
            }
        }
        cout<<i<<endl;
    }
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}