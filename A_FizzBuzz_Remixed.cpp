/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 27/02/2025                             
* Time: 20:07:46                             
* Problem: A_FizzBuzz_Remixed.cpp              
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
    int ans=3;
    if(n<=2){
        cout<<n+1<<endl;
        return;
    }
    if(n%15>=2)cout<<(((n)/15)*3)+3<<endl;
    if(n%15==1)cout<<(((n)/15)*3)+2<<endl;
    if(n%15==0)cout<<(((n)/15)*3)+1<<endl;
    
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