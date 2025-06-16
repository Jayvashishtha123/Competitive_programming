/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define all(x) (x).begin(), (x).end()

/********************************** SOLUTION **********************************/
bool is_rotation(const vi &a, const vi &b) {
    int n = a.size();
    vi doubled_a = a;
    doubled_a.insert(doubled_a.end(), a.begin(), a.end()); // a + a

    for (int i = 0; i < n; ++i) {
        bool match = true;
        for (int j = 0; j < n; ++j) {
            if (doubled_a[i + j] != b[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    // Sort to verify both contain same multiset
    vi a_sorted = a, b_sorted = b;
    sort(all(a_sorted));
    sort(all(b_sorted));
    if (a_sorted != b_sorted) {
        cout << "NO\n";
        return;
    }

    if (m > 2) {
        cout << "YES\n";
    } else {
        // m == 2 → check only rotations
        if (is_rotation(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    IOS;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
