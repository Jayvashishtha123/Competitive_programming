/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 27/02/2025                             
* Time: 21:17:31                             
* Problem: C_Limited_Repainting.cpp              
******************************************************************************/
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
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
/********************************** FUNCTIONS **********************************/
int op(const string &s, const vector<ll> &a, ll t) {
    int o = 0, n = s.size(), i = 0;
    while (i < n) {
        if (s[i] == 'B' && a[i] > t) {
            o++;
            while (i < n && !(s[i] == 'R' && a[i] > t)) {
                i++;
            }
        } else {
            i++;
        }
    }
    return o;
}
/********************************** SOLUTION **********************************/
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll lo = 0, hi = *max_element(all(a));
    while (hi - lo > 2) {
        ll m1 = lo + (hi - lo) / 3;
        ll m2 = hi - (hi - lo) / 3;
        int o1 = op(s, a, m1);
        int o2 = op(s, a, m2);
        if (o1 <= k) {
            hi = m2;
        } else if (o2 > k) {
            lo = m1;
        } else {
            lo = m1;
            hi = m2;
        }
    }
    ll r = hi;
    for (ll i = lo; i <= hi; i++) {
        if (op(s, a, i) <= k) {
            r = i;
            break;
        }
    }
    cout << r << "\n";
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
