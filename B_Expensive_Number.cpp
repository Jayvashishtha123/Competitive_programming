#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
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
    int cnt=0;
    int i=s.size()-1;
    while(s[i]=='0'){
        cnt++;
        i--;
    }
    i--;
    while(i>=0){
        if(s[i]!='0'){
            cnt++;;
        }
        i--;
    }
    cout<<cnt<<endl;
}
/********************************** MAIN FUNCTION *****************************/
int main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}