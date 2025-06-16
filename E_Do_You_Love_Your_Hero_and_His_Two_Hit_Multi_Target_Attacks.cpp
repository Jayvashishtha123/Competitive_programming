/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 26/02/2025                             
* Time: 19:55:43                             
* Problem: E_Do_You_Love_Your_Hero_and_His_Two_Hit_Multi_Target_Attacks.cpp              
******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;

void inc(int &x) {
    x++;
    if(x >= 500) x = 1;
}

/********************************** SOLUTION **********************************/
void solve() {
    int k; 
    cin >> k;
    vector<pair<int,int> > v;
    int cur=0;int xx=0;
   while(k>0){
    int cnt=0;
    while(cnt*(cnt+1)/2<=k)cnt++;
    for(int i=0;i<cnt;i++){
        v.push_back({xx,cur});
        xx++;
    }
    cur++;
    k-= cnt*(cnt-1)/2;
   }
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
   }
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
