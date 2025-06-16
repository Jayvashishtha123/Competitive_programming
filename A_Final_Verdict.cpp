/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 10/03/2025                             
* Time: 20:16:18                             
* Problem: A_Final_Verdict.cpp              
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
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int sum=0;
    for(int i=0;i<n;i++)sum+=v[i];
    int xx=x*n;
    if(xx==sum){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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