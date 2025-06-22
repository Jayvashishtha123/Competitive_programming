/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
// #define LOCAL
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
int countValid(vector<int>& segment, int s, int x,int k) {
    map<int, int> prefixFreq;
    // prefixFreq[0] = 1;
    int preSum = 0, res = 0,add=0;
    for (int i = 0; i < segment.size(); ++i) {
        if(segment[i]==x){
            if(prefixFreq.find(0)==prefixFreq.end())
            prefixFreq[0] = 1;
            while(k<i){
            preSum += segment[k];
            k++;
            prefixFreq[preSum]++;
            }
           
        }
        add+=segment[i];
        res+= prefixFreq[add-s];
    }
    return res;
}
void solve(istream &cin, ostream &cout) {
       int n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);
    int k=0;
    for (int& ai : a) cin >> ai;

    int total = 0;
    vector<int> seg;
    for (int i = 0; i <= n; ++i) {
        if (i == n || a[i] > x) {
            if (!seg.empty()) {
                total += countValid(seg, s, x,k);
                seg.clear(); 
                k=i+1;
            }
             
        } else {
            seg.push_back(a[i]);
        }
    }
    cout << total << '\n';
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve(cin,cout);
    }
    return 0;
}