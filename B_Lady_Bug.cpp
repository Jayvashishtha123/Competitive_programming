/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 30/03/2025                             
* Time: 11:15:49                             
* Problem: B_Lady_Bug.cpp              
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
    int od=0,ev=0;
    for(int i=0;i<n;i++){
        if(s2[i]=='0' && i%2)od++;
        else if(s2[i]=='0' && i%2==0) ev++;
    }
    for(int i=0;i<n;i++){
        if(s1[i]=='1' && i%2){
            ev--;
        }
        if(s1[i]=='1' && i%2==0)od--;
        if(od<0 || ev<0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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