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
    string s;
    cin>>s;
    int x=s.size();
    stack<char> st;

    int cnt=0;
    st.push(s[0]);
    for(int i=1;i<x;i++){
        if(!st.empty() && st.top()=='(' && s[i]==')'){
            st.pop();
        }else {
            st.push(s[i]);
        }
        if(st.empty()){
            cnt++;
        }
    }
    if(cnt>1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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