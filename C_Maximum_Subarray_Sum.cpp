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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool all_ones = true;
    for (char c : s) {
        if (c == '0') {
            all_ones = false;
            break;
        }
    }
    if (all_ones) {
        int max_sum = 0, current_sum = 0;
        for (int x : a) {
            current_sum += x;
            if (current_sum < 0) current_sum = 0;
            max_sum = max(max_sum, current_sum);
        }
        if (max_sum == k) {
            cout << "Yes" << endl;
            for (int x : a) cout << x << ' ';
            cout << endl;
        } else {
            cout << "No" << endl;
        }
        return;
    }
    vector<int> temp = a;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') temp[i] = -INF;
    }
    int max_sum = 0, current_sum = 0;
    for (int x : temp) {
        current_sum += x;
        if (current_sum < 0) current_sum = 0;
        max_sum = max(max_sum, current_sum);
    }
    if (max_sum > k) {
        cout << "No" << endl;
        return;
    }
    int pos = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            pos = i;
            break;
        }
    }
    int b = 0, prefix = 0;
    for (int i = pos + 1; i < n; i++) {
        prefix += temp[i];
        if(prefix >= INF || prefix <= -INF) {
            break;
        }
        b = max(b, prefix);

    }
    int c = 0, suffix = 0;
    for (int i = pos - 1; i >= 0; i--) {
        suffix += temp[i];
        if(suffix >= INF || suffix <= -INF) {
            break;
        }
        c = max(c, suffix);
    }
    b = max(b,0LL);
    c=max(0LL,c);
    a[pos] = k - b - c;
        for (int i = 0; i < n; i++) {
        if (s[i] == '0' && i != pos) {
            a[i] = -INF;
        }
    }

    cout << "Yes" << endl;
    for (int x : a) cout << x << ' ';
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