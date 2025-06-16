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
    int n;
    cin >> n;
    vi v(n, 0);
    int odd= (n+1)/2;
    int eve = n/2;
    int i=0,val=1;
    while(odd--){
        v[i]=val;
        val+=2;
        i++;
    }
    int even=2*eve;
    

    while(eve--){
        v[i]=even;
        even-=2;
        i++;
    }
    
    
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
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