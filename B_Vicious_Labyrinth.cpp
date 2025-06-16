/*************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 11/03/2025                             
* Time: 20:07:16                             
* Problem: A_Draw_a_Square.cpp              
***************************************************************/
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
    int n,k;cin>>n>>k;
    if(k%2==0){
        for(int i=0;i<n-2;i++){
            cout<<n-1<<' ';
        }
        cout<<n<<' '<<n-1<<endl;
    }else{
        for(int i=0;i<n-2;i++){
            cout<<n<<' ';
        }
        cout<<n<<' '<<n-1<<endl;
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