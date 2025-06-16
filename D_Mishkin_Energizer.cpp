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
    int n;cin>>n;
    string s;cin>>s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            mp['T']++;
        }
        else if(s[i]=='L'){
            mp['L']++;
        }
        else if(s[i]=='I'){
            mp['R']++;
    }
    }
    vector<int> ans = {mp['T'],mp['L'],mp['R']};
    sort(ans.begin(),ans.end());
    if(ans[0]==n || ans[1]==n || ans[2]==n){
        cout<<"NO"<<endl;
    }
    else{
        
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