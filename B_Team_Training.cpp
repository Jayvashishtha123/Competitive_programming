/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/03/2025                             
* Time: 20:05:31                             
* Problem: B_Team_Training.cpp              
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define all(x) (x).rbegin(), (x).rend()
#define sortall(x) sort(all(x))
const int INF = 1e18;
/********************************** SOLUTION **********************************/
void solve() {
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sortall(v); 
    int cnt = 0, mini = INF, k = 1;
    for (int i = 0; i < n; i++) {
        mini = min(mini, v[i]); 
        if (k * mini >= x) {  
            cnt++;
            mini = INF; 
            k = 0;      
        }
        k++;
    }
    cout << cnt << endl;
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    IOS;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
