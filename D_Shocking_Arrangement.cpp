/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 23/02/2025                             
* Time: 13:39:41                             
* Problem: D_Shocking_Arrangement.cpp              
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
        int val=0;
        int maxi=-1,mini=1,zero=0;
        priority_queue<int> pq,pqq;
        for(int i=0;i<n;i++){
            if(v[i]>=0){
                pq.push(v[i]);
            }
            else if(v[i]<0)pqq.push(v[i]);
            
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
        }
        val=maxi+abs(mini);
        if(maxi==0){
            cout<<"NO"<<endl;return;
        }else{
            cout<<"YES"<<endl;
        }
        int pre=0;
        while(n--){
           
            if(pre<=0){
                cout<<pq.top()<<" ";
                pre+=pq.top();
                pq.pop();
            }else{
                cout<<pqq.top()<<" ";
                pre+=pqq.top();
                pqq.pop();
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