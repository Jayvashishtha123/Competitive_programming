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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
void solve() {
    int n;
    cin >> n;
    cout << "mul 999999999" << endl;
    cout.flush();
    int response;
    cin >> response;
    // cout << "digit" << endl;
    // cout.flush();
    // cin >> response;
    // cout<<endl;
    cout << "digit" << endl;
    cout.flush();
    cin >> response;
    int y = n - 81;
    if(n!=81)
    cout << "add " << y << endl;
    cout.flush();
    cin >> response;
    cout << "!" << endl;
    cout.flush();
    cin >> response;
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