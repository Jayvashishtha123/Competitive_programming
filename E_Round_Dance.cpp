/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 17/02/2025                             
* Time: 19:13:36                             
* Problem: E_Round_Dance.cpp              
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
    vector<set<int>> vs(n);
    for(int i=0;i<n;i++){
        cin>>v[i],v[i]--;
        vs[i].insert(v[i]);
        vs[v[i]].insert(i);
    }
    vi d(n);
    for(int i=0;i<n;i++){
        d[i]=vs[i].size();
    }
    int cycle=0,non_cycle=0;
    vector<bool> is(n);
    for(int i=0;i<n;i++){
        if(!is[i]){
            queue<int> q;
            q.push(i);
            is[i]=true;
            vi components={i};
            while(!q.empty()){
                int u=q.front();
                q.pop();
                for(auto x:vs[u]){
                    if(!is[x]){
                        is[x]=true;
                        q.push(x);
                        components.push_back(x);
                    }
                }
            }
            bool non_cyl=false;
            for(int j:components){
                if(d[j]==1){
                    non_cyl=true;
                    break;
                }
            }
            if(non_cyl)non_cycle++;
            else cycle++;
        }
    }
    cout<<cycle + min(non_cycle,1LL)<<" "<<non_cycle+cycle<<endl;

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