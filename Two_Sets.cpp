/**********************************let's begin**********************************/
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
    int n;cin>>n;
    long long sum = n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<int> set1, set2;
    long long target = sum / 2;
    
    for (int i = n; i >= 1; --i) {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << '\n';
    for (int num : set1) cout << num << " ";
    cout << '\n' << set2.size() << '\n';
    for (int num : set2) cout << num << " ";
    cout << '\n';
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
        solve();

    return 0;
}