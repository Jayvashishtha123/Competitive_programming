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

    vi nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int s = 0;
    int i = 0;
    int j = n - 1;

    while (i < n && nums[i] > 0) {
        s += nums[i];
        i++;
    }

    while (j >= 0 && nums[j] < 0) {
        s += abs(nums[j]);
        j--;
    }

    if (i == n || j < 0) {
        cout << s << endl;
        return;
    }

    int c = 0;
    int maxi = 0;
    int c1 = 0;

    for (int p = i; p <= j; p++) {
        if (nums[p] > 0) {
            c += nums[p];
        } else {
            c1 += abs(nums[p]);
        }
    }

    int sum = 0;
    int c2 = 0;
    for (int p = i; p <= j; p++) {
        if (nums[p] > 0) {
            c2 += nums[p];
            sum = max(sum, c2 + c1);
        } else {
            c1 -= abs(nums[p]);
        }
    }

    cout << s + sum << endl;
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
