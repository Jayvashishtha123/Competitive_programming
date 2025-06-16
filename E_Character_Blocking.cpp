/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 18/02/2025                             
* Time: 16:13:01                             
* Problem: E_Character_Blocking.cpp              
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
#define all(x) (x).begin(), (x).end())
#define sortall(x) sort(all(x))
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;

/********************************** SOLUTION **********************************/
void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int t, q;
    cin >> t >> q;

    map<char, int> ss1, ss2;
    for (auto c : s1) ss1[c]++;
    for (auto c : s2) ss2[c]++;

    int tt = 1;
    map<int, pair<char, char>> mp;

    while (q--) {
       

        int x;
        cin >> x;

        if (x == 3) {
            if (ss1 == ss2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (x == 2) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            b--;
            d--;
            if (a == 1 && c == 1) {
                ss1[s1[b]]--;
                ss1[s1[d]]--;
                swap(s1[b], s1[d]);
                ss1[s1[b]]++;
                ss1[s1[d]]++;
            } else if (a == 2 && c == 2) {
                ss2[s2[b]]--;
                ss2[s2[d]]--;
                swap(s2[b], s2[d]);
                ss2[s2[b]]++;
                ss2[s2[d]]++;
            } else if (a == 1 && c == 2) {
                ss1[s1[b]]--;
                ss2[s2[d]]--;
                swap(s1[b], s2[d]);
                ss1[s2[d]]++;
                ss2[s1[b]]++;
            } else {
                ss2[s2[b]]--;
                ss1[s1[d]]--;
                swap(s2[b], s1[d]);
                ss2[s1[d]]++;
                ss1[s2[b]]++;
            }
        } else {
            int idx;
            cin >> idx;
            idx--;
            mp[tt + t] = {s1[idx], s2[idx]};
            ss1[s1[idx]]--;
              if (ss1[s1[idx]] == 0) {
                ss1.erase(s1[idx]);
            }
            ss2[s2[idx]]--;
              if (ss2[s2[idx]] == 0) {
                ss2.erase(s2[idx]);
            }
            // s1[idx] = s2[idx] = ' ';  
        }
        tt++;
         if (mp.find(tt) != mp.end()) {
            pair<char, char> p = mp[tt];
            ss1[p.first]++;
            ss2[p.second]++;
            mp.erase(tt);  
        }
    }
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
