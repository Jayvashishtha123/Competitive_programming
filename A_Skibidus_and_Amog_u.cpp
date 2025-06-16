/******************************************************************************
Author: Jay Vashishtha
Date: 10/01/2025
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
void solve() {
   string s;cin>>s;
   string ans="";
   for(int i=0;i<s.size()-2;i++){
    ans+=s[i];
   }
   ans+='i';
   cout<<ans<<endl;
}
int32_t main() {
    IOS;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
