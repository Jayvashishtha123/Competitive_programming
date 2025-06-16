#include <bits/stdc++.h>
using namespace std;

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

void solve() {
    int n;
    cin >> n;
    vi v(n), vv(n - 1);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n - 1; i++) cin >> vv[i];

    // Binary search for the maximum possible value at the root
    int l = v[0], r = v[0];
    for (int i = 1; i < n; i++) r += v[i]; // Upper bound: sum of all values

    int ans = v[0];
    while (l <= r) {
        int mid = (l + r) / 2;

        // Feasibility check for the target value `mid`
        bool feasible = true;
        int sum = v[0]; // Start with the root value
        for (int i = 0; i < n - 1; i++) {
            sum += vv[i]; // Add the values of the children
            if (sum < mid * (i + 2)) { // Check the condition
                feasible = false;
                break;
            }
        }

        if (feasible) {
            // If `mid` is feasible, try a larger value
            ans = mid;
            l = mid + 1;
        } else {
            // Otherwise, try a smaller value
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}