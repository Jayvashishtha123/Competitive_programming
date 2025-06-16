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
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int i=0;
    int preCnt=-1;
    while(i<n-1){
        int cnt=1;
        if(v[i]-v[i-1] > 1){
            preCnt=0;
        }
        while(v[i+1]==v[i]){
            cnt++;i++;
        }
        if(cnt>=4 || (preCnt>=2 && cnt>=2)){
            cout<<"YES"<<endl;
            return;
        }
         
        preCnt=max(preCnt,cnt);
        i++;
    }
    cout<<"NO"<<endl;
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