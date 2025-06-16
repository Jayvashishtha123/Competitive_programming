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
    string a,b,c;cin>>a>>b>>c;
    int n=a.size(),m=b.size();
    int cnt1=0,cnt2=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]!=c[i+j])cnt1++;
        if(b[j]!=c[i+j])cnt2++;
        cnt1=min(cnt1,cnt2);
        cnt2=min(cnt1,cnt2);
        i++;
        j++;
    }
    cout<< min(cnt1,cnt2)<<endl;
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