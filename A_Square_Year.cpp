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
    string s;cin>>s;
    int ss=0;
    ss = ss*10 + (s[0]-'0');
    ss = ss*10+(s[1]-'0');
    ss = ss*10+(s[2]-'0');
    ss = ss*10+(s[3]-'0');
    int i=0,j=100;
    while(i<=j){
        int mid = (i+j)/2;
        if(mid*mid == ss){
            cout<<mid<<" "<<0<<" "<<endl;
            return;
        }
        if(mid*mid < ss){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    cout<<-1<<endl;
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