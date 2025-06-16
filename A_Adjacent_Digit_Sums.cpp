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
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define revsortall(x) sort(all(x)); reverse(all(x))
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;

/********************************** SOLUTION **********************************/
void solve() {
    int x,y;cin>>x>>y;
     if(y-x==1){
        cout<<"Yes"<<endl;
        return;
    }
    if(y>=x){
        cout<<"No"<<endl;
        return;
    }
    if((x-y+1)%9==0){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
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