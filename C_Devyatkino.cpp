/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 11/02/2025                            *
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
#define revsortall(x) sort(all(x)); reverse(all(x))
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
bool haveSeven(int x){
    string s=to_string(x);
    return s.find('7')!=string::npos;
}
void solve() {
    int n;cin>>n;
    int m=0;
    while(true){
        if(haveSeven(n+9*m))break;
        m++;
    }
    int num=9;
    for(int i=0;i<9;i++){
        num=num*10+9;
        for(int i=1;i<=m;i++){
            if(haveSeven(n+num*i))m=min(m,i); 
        }
    }
    cout<<m<<endl;
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
