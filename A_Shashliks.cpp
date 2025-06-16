/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define LOCAL

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
void solve(istream &cin, ostream &cout) {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    
    int cnt = 0;

    if (x < y && a <= k) {
        int moves = (k - a + x) / x;
        cnt += moves;
        k -= moves * x; 
    } 
    else if (y <= x && b <= k) {
        int moves = (k - b+ y) / y;
        cnt += moves;
        k -= moves * y;  
    }

    if (k >= a) {
        int moves = (k - a + x) / x;
        cnt += moves;
        k -= moves * x;
    }
    if (k >= b) {
        int moves = (k - b + y) / y;
        cnt += moves;
        k -= moves * y;
    }

    cout << cnt << endl;
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve(cin,cout);
    }
    return 0;
}