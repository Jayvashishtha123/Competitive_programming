/******************************************************************************
Author: Jay Vashishtha
Date: 10/02/2025
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
void solve() {
  string s;cin>>s;
  bool is =false;
  for(int i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1]){
        is=true;
        break;
    }
  }
  if(is){
    cout<<1<<endl;
  }else{
    cout<<s.size()<<endl;
  }
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
