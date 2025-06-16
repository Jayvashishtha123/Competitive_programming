/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 14/02/2025                             *
*                             Time: 13:58:40                             *
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
#define revsortall(x) sort(all(x)); reverse(all(x))
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
int ask(int i, int j) {
    cout << "? " << i+1 << " " << j+1 << endl;
    int g; cin >> g;
    return g;
}
void solve() {
    int n; cin >> n;
    vi a(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--; 
    }

    vi pos(n, -1);
    for(int i = 0; i < n; i++) {
        pos[a[i]] = i;
    }

    bool is = true;
    for(int i = 0; i < n; i++) {
        is &= (pos[i] != -1);
    }
    if (is) {
        int v = ask(pos[0], pos[n-1]);
        int u = ask(pos[n-1], pos[0]);
        debug(v);  
        debug(u);  
        if (v + u < 2 * (n-1)) {
            cout << "! A" << endl;
        } else {
            cout << "! B" << endl;
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (pos[i] == -1) {
                int v = ask(i, (i + 1) % n);
                debug(v);  // Debug output
                if (v == 0) {
                    cout << "! A" << endl;
                } else {
                    cout << "! B" << endl;
                }
                break;
            }
        }
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
