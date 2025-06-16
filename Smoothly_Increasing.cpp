/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 19/03/2025                             
* Time: 21:28:24                             
* Problem: Smoothly_Increasing.cpp              
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
bool si(const vector<long long>& arr) {
    int n = arr.size();
    if (n == 1)
        return true;
        for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1])
            return false;
    }
        vector<long long> diffs(n - 1);
    for (int i = 0; i < n - 1; i++) {
        diffs[i] = arr[i + 1] - arr[i];
    }
        return si(diffs);
}

void solve() {
    int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        if (N >= 32) {
            cout << string(N, '0') << "\n";
            return;
        }
        string ans;
        ans.reserve(N);
        for (int i = 0; i < N; i++) {
            vector<long long> temp;
            temp.reserve(N - 1);
            for (int j = 0; j < N; j++) {
                if (j == i)
                    continue;
                temp.push_back(A[j]);
            }
            ans.push_back(si(temp) ? '1' : '0');
        }
        cout << ans << "\n";
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