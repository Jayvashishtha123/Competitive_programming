/******************************************************************************
Author: Jay Vashishtha
Date: 04/01/2025
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
void solve() {
    int n,s1,s2;cin>>n>>s1>>s2;
    int m1;cin>>m1;
    vector<pair<int,int>>v;
    for(int i=0;i<m1;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int m2;cin>>m2;
    vector<pair<int,int>> vv;
    for(int i=0;i<m2;i++){
        int x,y;
        cin>>x>>y;
        vv.push_back({x,y});
    }

    

    cout<<"Jay"<<endl;







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
