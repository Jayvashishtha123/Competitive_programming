/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 21/02/2025                             
* Time: 02:15:56                             
* Problem: C_Sequence_Master.cpp              
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
    vi v(2*n);
    int ans=0; int sum=0;
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        ans+=abs(v[i]);
        sum+=abs(v[i]+1);
    }
    if(n==1){
     ans=min(ans,abs(v[0]-v[1]));
        cout<<ans<<endl;
        return;
    }else if(n==2){
        ans= min(ans,abs(v[0]-2)+abs(v[1]-2)+abs(v[2]-2)+abs(v[3]-2));
    }
    if(n%2==0){
        for(int i=0;i<2*n;i++){
            ans=min(ans,sum+abs(v[i]-n)-abs(v[i]+1));
        }
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