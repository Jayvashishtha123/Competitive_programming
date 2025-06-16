/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 22/03/2025                             
* Time: 11:33:20                             
* Problem: D_Mathematical_Problem.cpp              
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
    string s;cin>>s;
    bool isZero=false;int oo=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            isZero=true;
            break;
        }
        if(s[i]=='1')oo++;

    }
    if(n==1){
        cout<<s[0]-'0'<<endl;
        return;
    }
    if(n==2){
        cout<<(s[0]-'0')*10 + s[1]-'0'<<endl;
        return;
    }
    if(n==3){
        if(s[0]=='0' || s[2]=='0'){
            cout<<0<<endl;
            return;
        }
        if(s[1]=='0'){
            cout<<min(s[0]-'0' + s[2]-'0',(s[0]-'0') * (s[2]-'0'))<<endl;
            return;
        }
    }
   if(isZero){
       cout<<0<<endl;
       return;
   }
    int mn=1e18;
    for(int i=0;i<n-1;i++){
        int x=s[i]-'0';
        int y=s[i+1]-'0';
       int summ=x*10+y;
       for(int j=0;j<i;j++){
        if(s[j]!='1'){
            summ+=s[j]-'0';
        }
       }
       for(int j=i+2;j<n;j++){
         if(s[j]!='1'){
            summ+=s[j]-'0';
    }
}
        mn=min(mn,summ);
    }
    cout<<mn<<endl;
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