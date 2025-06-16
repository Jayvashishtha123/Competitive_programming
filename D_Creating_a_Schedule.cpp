/**********************************let's begin**********************************/
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
void solve() {
     int n,m;cin>>n>>m;
    vi classrooms(m);
    for(int i=0;i<m;i++)cin>>classrooms[i];
    sort(classrooms.begin(),classrooms.end());
    for(int i=0;i<n;i++){
        int a=-1;
        if(i&1) a= m-i/2-1;
        else a=i/2;
        int b=m-a-1;
        int it=3;
        while(it--){
        cout<<classrooms[a]<<' '<<classrooms[b]<<' ';
        }
        cout<<endl;
    }
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now(); // Start measuring time
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now(); // End measuring time
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; // Print execution time
    return 0;
}

