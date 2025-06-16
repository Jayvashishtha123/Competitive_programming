/******************************************************************************
Author: Jay Vashishtha
Date: 04/01/2025
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

void solve() {
    string s,t;cin>>s>>t;

   vector<int> v(t.size(),-1);
   int n=t.size();
   map<char,int> mp;

   if(s.size()==1 || t.size()==1){
    cout<<-1<<endl;
    return;
   }

   for(int i=n-2;i>=0;i--){
    if(mp.find(t[i])==mp.end()){
        mp[t[i]]=i;
    }
   }

   int fst=-1,snd=-1;
   int vl=INT_MAX;
   bool fnd=false;
 for(int i=1;i<s.size();i++){
    if(mp.find(s[i])!=mp.end() && (n+i-mp[s[i]])<vl){
        vl=n+i-mp[s[i]];
        fst=i;
        fnd=true;
        snd=mp[s[i]];
    }
 }
 if(!fnd){
    cout<<-1<<endl;
    return;
 }
 string ss = s.substr(0,fst)+t.substr(snd);
 cout<<ss<<endl;

}

int32_t main() {
    IOS;
    solve();
    return 0;
}