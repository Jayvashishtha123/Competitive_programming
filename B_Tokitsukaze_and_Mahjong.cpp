/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/02/2025                             
* Time: 01:42:44                             
* Problem: B_Tokitsukaze_and_Mahjong.cpp              
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
    int p=0,m=0,s=0;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[1]=='p')p++;
     if(s1[1]=='m')m++;
      if(s1[1]=='s')s++;
       if(s2[1]=='p')p++;
     if(s2[1]=='m')m++;
      if(s2[1]=='s')s++;
       if(s3[1]=='p')p++;
     if(s3[1]=='m')m++;
      if(s3[1]=='s')s++;
      if(p==3||m==3||s==3){
        cout<<0<<endl;
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