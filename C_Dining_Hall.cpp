/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 23/03/2025                             
* Time: 11:55:52                             
* Problem: C_Dining_Hall.cpp              
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
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    set<vi> st1,st2;
    set<pii> stt;
    auto push = [&](int x,int y){
        if(stt.find({x,y})!=stt.end())return;
        st1.insert({3*x+3*y+2,x,y});
        st2.insert({3*x+3*y+2,3*x+1,3*y+1});
        st2.insert({3*x+3*y+3,3*x+1,3*y+2});
        st2.insert({3*x+3*y+3,3*x+2,3*y+1});
        st2.insert({3*x+3*y+6,3*x+2,3*y+2});
        stt.insert({x,y});
    };
    push(0,0);
    push(0,1);
    push(1,0);
    for(int i=0;i<n;i++){
        if(v[i]==0){
            auto vv= *st1.begin();
            int x=vv[1],y=vv[2];
            st2.erase({3*x+3*y+2,3*x+1,3*y+1});
            st1.erase(vv);
            cout<<3*x+1<<" "<<3*y+1<<endl;
            push(x+1,y);
            push(x+2,y);
            push(x,y+1);
            push(x,y+2);
            push(x+1,y+1);
        }else{
            auto vv= *st2.begin();
            int x=vv[1]/3,y=vv[2]/3;
            st1.erase({3*x+3*y+2,x,y});
            st2.erase(vv);
            cout<<vv[1]<<" "<<vv[2]<<endl;
            push(x+1,y);
            push(x+2,y);
            push(x,y+1);
            push(x,y+2);
            push(x+1,y+1);
        }
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