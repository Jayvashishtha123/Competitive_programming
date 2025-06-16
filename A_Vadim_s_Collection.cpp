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
    string s;
    cin>>s;
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    string ans="";
    for(int i=0;i<10;i++){
        int v= 10-i-1;
        bool flag=true;
        while(flag){
            char val= v + '0';
            if(mp.find(val)!=mp.end()){
                ans+=val;
                mp[val]--;
                if(mp[val]==0){
                    mp.erase(val);
                }
                flag=false;
            }
            else{
                v++;
            }
        }
    }
    cout<<ans<<endl;
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