/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 10/03/2025                             
* Time: 21:39:37                             
* Problem: C_Breach_of_Faith.cpp              
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
const int MOD = 1e9+7;
const int INF = 1e18;
const int N = 1e5+5;
/********************************** SOLUTION ***********************************/
void solve() {
    int n;cin>>n;
    vi v(2*n);
    set<int> st;
    for(int i=0;i<2*n;i++){cin>>v[i];st.insert(v[i]);}
    sort(v.rbegin(),v.rend());
    // cout<<v[0]<<" ";
    int sum=0;
    for(int i=0;i<=n;i++)sum+=v[i];
    for(int i=n+1;i<2*n;i++)sum-=v[i];
    // cout<<sum<<" ";
    vi ans(2*n+1);
    ans[0]=v[0];
    ans[1]=sum;int x=2;
    for(int i=1;i<=n;i++){
        ans[x]=v[i];
        x+=2;
    }
    x=3;
    for(int i=n+1;i<2*n;i++){
        ans[x]=v[i];
        x+=2;
    }
    for(auto c:ans){
    cout<<c<<' ';
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