/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 23/03/2025                             
* Time: 12:58:07                             
* Problem: D_Simple_Permutation.cpp              
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
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    
    if (n == 2) {
        cout << "2 1\n";
        return;
    }
    
    int y = n / 3;
    int prime = -1;
    
    for (int i = 1; i <= 2*y; i++) {
        if (isPrime(i)) {
            prime = i;
        }
    }
    
    vi v;
    if (prime != -1) v.push_back(prime);
    int mini=min(prime-1,n-prime);

    int fst=prime-1,scn=prime+1;
    while(fst>=1 || scn<=n){
        if(fst>=1){
        v.push_back(fst);
        fst--;
        }
        if(scn<=n){
        v.push_back(scn);
        scn++;
        }
    }

    
    for (auto &i : v) {
        cout << i << " ";
    }
    cout << endl;
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
