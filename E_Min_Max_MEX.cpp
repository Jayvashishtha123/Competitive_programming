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
    int n, k;
    cin >> n >> k;
    vi a(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]=1;
    }
    int mex = 0;
    while (mp.find(mex) != mp.end()) {
        mex++;
    }
    int left = 0, right = mex;
    int result = 0;
    while (left <= right) {
        int mid = (left+right) / 2;
        if (mid == 0) {
            result = mid;
            left = mid + 1;
            continue;
        }
        int ttl = 0;
        unordered_map<int,int> mp2;
        for (int num : a) {
            if (num < mid) {
                mp2[num]=1;
            }
            if (mp2.size() == mid) {
                ttl++;
                mp2.clear();
                if (ttl >= k) {
                    break;
                }
            }
        }
        if (ttl >= k) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << endl;
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