/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 22/03/2025                             
* Time: 20:15:52                             
* Problem: B_Serval_and_Final_MEX.cpp              
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
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int idx1=-1,idx2=-1;
    int i=0;
    bool isAllZero=true;
    for(int k=0;k<n;k++){
        if(v[k]!=0){
            isAllZero=false;
            break;
        }
    }
    if(isAllZero){
       cout<<3<<endl;
         cout<<1<<' '<<2<<endl;
         cout<<2<<' '<<n-1<<endl;
         cout<<1<<' '<<2<<endl;
        return;
    }

    for(i;i<n;i++){
        if(v[i]==0){
            idx1=i;
            break;
        }
    }
    int j=n-1;
    for(j;j>=0;j--){
        if(v[j]==0){
            idx2=j;
            break;
        }
    }
    if(idx1==-1 && idx2==-1){
        cout<<1<<endl;
        cout<<1<<' '<<n<<endl;
        return;
    }
    if(idx1==idx2){
        if(idx1==0){
            cout<<2<<endl;
            cout<<1<<' '<<2<<endl;
            cout<<1<<' '<<n-1<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            cout<<idx1<<' '<<idx1+1<<endl;
            cout<<1<<' '<<n-1<<endl;
            return;
        }
    }
    if(idx1==0 && idx2==n-1){
        cout<<3<<endl;
        cout<<1<<' '<<n-2<<endl;
        cout<<2<<' '<<3<<endl;
        cout<<1<<' '<<2<<endl;
        return;
    }
    int ans=1;
    int dec= (idx2-idx1);
     n -=dec;
    cout<<2<<endl;
    cout<<idx1+1<<' '<<idx2+1<<endl;
    cout<<1<<' '<<n<<endl;

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