#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const int INF = 1e18;

/********************************** PRIME FUNCTION **********************************/
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

/********************************** SOLVE FUNCTION **********************************/
void solve() {
    int n, k;
    cin >> n >> k;
    if (n == 2 && k == 1) {
        cout << "YES" << endl;
        return;
    }
    if (n == 1 && k == 2) {
        cout << "YES" << endl;
        return;
    }
    if (n == 1) {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0) {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 1 && k > 1) {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 1 && k == 1) {
        if (isPrime(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

/********************************** MAIN FUNCTION **********************************/
int main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
