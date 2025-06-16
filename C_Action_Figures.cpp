/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 18/03/2025                             
* Time: 19:09:53                             
* Problem: C_Action_Figures.cpp              
******************************************************************************/
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
    int l=0,r=0,idx=0;
    for(int i=0;i<n;i++)if(s[i]=='1')r++;
        while(l<=r){
        int mid=(l+r)/2;
        vector<bool>v(n,false);
        int check=mid;
        for(int kk=n-1;kk>=0;kk--){
            if(s[kk]=='1' && check>0){
                v[kk]=true;
                check--;
            }
        }
        int val=0;
        bool is=true;
        for(int i=0;i<n;i++){
            if(v[i]){
                val--;
                if(val<0){
                    is=false;
                    break;
                }
            }else val++;
        }
        if(is){
            idx=mid;
            l=mid+1;;
        }else{
            r=mid-1;;
        }
    }
    int ans=0;
    for(int j=n-1;j>=0;j--){
        if(s[j]=='1' && idx>0){
            idx--;
        }else{
            ans+= j+1;
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