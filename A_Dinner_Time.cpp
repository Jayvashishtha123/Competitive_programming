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
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if (n == p) {
        if (m == q) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }
    int k = n / p;
    int r = n % p;
    if (r == 0) {
        if (k * q == m) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
            cout << "YES"<<endl; 
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