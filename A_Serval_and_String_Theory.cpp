/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 22/03/2025                             
* Time: 20:06:57                             
* Problem: A_Serval_and_String_Theory.cpp              
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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(k==0){
        string t=s;
        reverse(t.begin(),t.end());
        if(s<t){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    bool isAllEqual=true;
    char check=s[0];
    for(int i=1;i<n;i++){
        if(s[i]!=check){
            isAllEqual=false;
            break;
        }
    }
    if(isAllEqual){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
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