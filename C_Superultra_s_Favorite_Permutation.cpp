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
bool isComp(int n){
    if(n<=3)return false;
    if(n%2==0 || n%3==0)return true;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0)return false;
    }
    return false;
}
void solve() {
    int n;cin>>n;
    if(n<=4){
        cout<<-1<<endl;
        return;
    }
    int val=-1;
    if(n%2==0){
        val=n-1;
    }
    else{
        val=n;
    }
    for(int i=1;i<=n;i+=2){
       cout<<i<<" ";
    }
    int value=-1;
    for(int i=2;i<=n;i+=2){
        if(isComp(val+i)){
            value=i;
            break;
        }
    }
    if(value==-1){
        cout<<-1<<endl;
        return;
    }
    if(value!=-1){
        cout<<value<<" ";
    }
    for(int i=2;i<=n;i+=2){
        if(i==value)continue;
        cout<<i<<" ";
    }
    cout<<endl;
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