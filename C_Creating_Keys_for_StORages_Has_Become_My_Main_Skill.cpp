/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/02/2025                             
* Time: 23:59:52                             
* Problem: C_Creating_Keys_for_StORages_Has_Become_My_Main_Skill.cpp              
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
    int n,x;cin>>n>>x;
    vi ans;
    if(n==1){
        cout<<x<<endl;
        return;
    }
    int val=0;
    for(int i=0;i<n;i++){
        if((x|i)==x){
            ans.push_back(i);
            val|=i;
        }else break;
    }
    if(ans.size()<n){
    ans.push_back(x);
    val|=x;
    }
    
    if(val!=x){
        ans[ans.size()-1]=x;
    }
   
    while(ans.size()<n)ans.push_back(0);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

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