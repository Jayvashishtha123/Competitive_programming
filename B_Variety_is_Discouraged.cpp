/******************************************************************************
*                             Author: Jay Vardhan Vashishtha              *
*                             Date: 16/02/2025                             *
*                             Time: 20:13:30                             *
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
    int n;
    cin >> n;
    vi a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int c = 0;
    int ind = -1;
    int ind1 = -1;
    int maxi = 0;
    int p = -1;
    for (int i = 0; i < n;) {
        if (mp[a[i]] == 1) {
            p = i + 1;
            c = 0;
            while (i < n && mp[a[i]] == 1) {
                c++;
                i++;
            }

            if (c > maxi) {
                maxi = c;
                ind = p;
                ind1 = i;
            }
        } else {
            c = 0;
            i++;
        }
    }
    if (ind == -1 && ind1 == -1) {
        cout << 0 << endl;
    } else {
        cout << ind << " " << ind1 << endl;
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
