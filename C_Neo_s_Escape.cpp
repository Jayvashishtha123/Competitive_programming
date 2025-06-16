#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    int i = 0;

    while (i < n) {
        int j = i;
        while (j + 1 < n && a[j] == a[j + 1]) j++;
        if ((i == 0 || a[i] > a[i - 1]) && (j == n - 1 || a[j] > a[j + 1])) {
            cnt++;
        }
        i = j + 1;
    }

    cout << max(1LL, cnt) << endl;
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
