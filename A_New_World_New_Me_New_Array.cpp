/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/02/2025                             
* Time: 23:05:20                             
* Problem: A_New_World_New_Me_New_Array.cpp              
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
    int n,k,p;cin>>n>>k>>p;
    if(k==0){
        cout<<0<<endl;;
        return;
    }
    int divi=(abs(k)+p-1)/p;
    if(n<divi){
        cout<<-1<<endl;
        return;
    }else{
        cout<<divi<<endl;
        return;
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