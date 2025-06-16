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
int getMaxK(int val,int m) {
    int l = 0, r = N;int ans=0;
    while (l <= r) {
        int mid = (l + r) / 2;
        int sum = val- mid * (mid + 1) / 2;
        sum-= val+m;
        if (sum <= 0) {
            l = mid + 1;
            ans=mid;
        } else {
            r = mid - 1;
        }
    }
    return l; 
}

void solve() {
    int n, m;
    cin >> n >> m;

    int k1 = getMaxK(n,m);
    // cout<<k1<<endl;
    // int k2 = getMaxK(m);
    // cout<<k2<<endl;

   cout << k1<< endl;
}

/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    // int t; cin >> t; while (t--) solve();
    solve();
    return 0;
}
