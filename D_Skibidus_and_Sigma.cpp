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
  int n,m;cin>>n>>m;
  vi summ;
  vector<vector<int>> v(n,vector<int> (m));
  int ans=0;
  for(int i=0;i<n;i++){
    int s=0;
    for(int j=0;j<m;j++){
        cin>>v[i][j];
        ans+=v[i][j] * (m-j);
        s+=v[i][j];
    }
    summ.push_back(s);
  }
  sort(summ.begin(),summ.end());
  for(int i=0;i<n;i++){
   ans+=summ[i]*i*m;
  }
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
