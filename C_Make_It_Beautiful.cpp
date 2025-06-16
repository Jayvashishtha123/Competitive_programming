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
void solve(ifstream &infile, ofstream &outfile) {
    int n, k;
    infile >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++) {
        infile >> v[i];;
    }
    int beauty = 0;
    for (int x : v) {
        beauty += __builtin_popcountll(x);
    }
    for (int p = 0; p < 64 && k > 0; p++) { 
        for (int i = 0; i < n && k > 0; i++) {
            if (!(v[i] & (1LL << p)) && (k - (1LL << p)) >= 0) { 
                beauty++;
                k -= (1LL << p);
                v[i] |= (1LL << p); 
            }
        }
    }

    outfile << beauty << endl; 
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;

    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    if (!infile || !outfile) {
        cerr << "Error opening files!" << endl;
        return 1;
    }
    int t;
    infile >> t;
    while (t--) {
        solve(infile, outfile);
    }
    infile.close();
    outfile.close();
    return 0;
}
