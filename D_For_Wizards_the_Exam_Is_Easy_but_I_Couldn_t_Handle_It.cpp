/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 26/02/2025                             
* Time: 00:26:40                             
* Problem: D_For_Wizards_the_Exam_Is_Easy_but_I_Couldn_t_Handle_It.cpp              
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
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<pair<int, pair<int, int> > >vp;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = i; j < n; j++) {
            if(v[j] < v[i]) cnt++;
            if(v[j] > v[i]) cnt--;
            vp.push_back({cnt, {i + 1, j + 1}});
        }
    }
    sort(vp.rbegin(), vp.rend());
        cout << vp[0].second.first << " " << vp[0].second.second << endl;
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