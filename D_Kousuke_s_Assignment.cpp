/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 21/03/2025                             
* Time: 19:42:50                             
* Problem: D_Kousuke_s_Assignment.cpp              
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
    set<int> mp;
    mp.insert(0);
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
        ans+=v[i];
        if(v[i]==0){
            cnt++;
            ans=0;
            mp.clear();
            mp.insert(0);
            continue;
        }
        if(mp.find(ans)!=mp.end()){
            cnt++;
            ans=0;
            mp.clear();
        }else{
            mp.insert(ans);
        }
        mp.insert(0);
    }
    cout<<cnt<<endl;
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