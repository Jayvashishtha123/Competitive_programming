#include "bits/stdc++.h"
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
void bfs(int src, vector<vector<int> >& adj, vector<int>& even, vector<int>& odd) {
    queue<pair<int, int> > q;
    q.push({src, 0});

    even[src] = 0;
    odd[src] = INT_MAX;

    while (!q.empty()) {
        int u = q.front().first;
        int parity = q.front().second;
        q.pop();

        for (int v : adj[u]) {
            if (parity == 0) { 
                if (odd[v] > even[u] + 1) {
                    odd[v] = even[u] + 1;
                    q.push({v, 1});
                }
            } else { 
                if (even[v] > odd[u] + 1) {
                    even[v] = odd[u] + 1;
                    q.push({v, 0});
                }
            }
        }
    }
}

void solve() {
    int n,m,l;cin>>n>>m>>l;
    vi v(l);
    vvi adj(n);
    for(int i=0;i<l;i++)cin>>v[i];
    // vpii dist(n,pii(-1, 0));
    vi even(n,INF),oddd(n,INF);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(0,adj,even,oddd);
    vi odd;
    int sum=0;
    for(int i=0;i<l;i++){
        if(v[i]%2){
            odd.push_back(v[i]);
        }
        sum+=v[i];
    }
    sort(odd.begin(),odd.end());
    int even_sum = -1, odd_sum = -1;
    if (sum % 2) {
            odd_sum = sum;
        } else {
            even_sum = sum;
        }
    
    if (!odd.empty()) { 
        if (sum % 2) {
            odd_sum = sum;
            even_sum = sum - odd[0];
        } else {
            even_sum = sum;
            odd_sum = sum - odd[0];
        }
    }
    string ans="";

    for (int i = 0; i < n; i++) {
        if (even_sum >= even[i] && even_sum!=-1  ) {
            ans += '1';
        } else if(odd_sum >= oddd[i] && odd_sum!=-1){
            ans += '1';
        }else{
            ans+='0';
        }
    }

    cout << ans << endl;

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