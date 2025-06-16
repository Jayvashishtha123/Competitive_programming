/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/03/2025                             
* Time: 20:27:21                             
* Problem: D_Place_of_the_Olympiad.cpp              
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
    int n, m, k;
    cin >> n >> m >> k;
    int s = 1, e = k, ans = k;
    while (s <= e) {
        int mid = (s + e) / 2;
        int remainingK = k;
        remainingK -= (n * mid * (m / (mid + 1))); 
        int rem = m % (mid + 1);                
        remainingK -= (rem * n);          

        if (remainingK <= 0) { 
            ans = mid; 
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    cout << ans << endl;
}

/********************************** MAIN FUNCTION **********************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}
