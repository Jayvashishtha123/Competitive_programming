/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 19/02/2025                             
* Time: 00:03:20                             
* Problem: D_Palindrome_Shuffle.cpp              
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
    string s;cin>>s;
    int n=s.size();
    int low=0,high=n;

    while(low<high && s[low]==s[high-1]){
        low++;high--;
    }
    if(low==high){
        cout<<0<<endl;
        return;
    }
    s=s.substr(low,high-low);
    n=s.size();
    


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