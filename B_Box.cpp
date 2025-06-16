/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/02/2025                             
* Time: 00:57:01                             
* Problem: B_Box.cpp              
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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]<=i){
            cout<<-1<<endl;
            return;
        }
    }
    
    if(v[0]==n){
        for(int i=n;i>=1;i--)cout<<i<<" ";
        cout<<endl;
        return;
    }
    priority_queue<int,vector<int>,greater<int>> q;
    set<int> st,stt;
    for(int i=0;i<n;i++){
         if(v[i]!=i+1 && stt.find(i+1)==stt.end()){
            q.push(i+1);
        }
       if(st.find(v[i])!=st.end()){
            cout<<q.top()<<" ";
            stt.insert(q.top());
            q.pop();
        }else{
            cout<<v[i]<<" ";
            stt.insert(v[i]);
            st.insert(v[i]);
        }
    }
    cout<<endl;
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