/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 18/02/2025                             
* Time: 16:13:01                             
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
#define all(x) (x).begin(), (x).end())
#define sortall(x) sort(all(x))
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
      int n;
    cin >> n;
    vi b(n - 2);
    for (int i = 0; i < n - 2; i++) {
        cin >> b[i];
    }
    bool valid = true;
    for (int i = 0; i < n - 3; i++) {
        if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1) {
            valid = false;
            break;
        }
    }
    if (valid) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}
