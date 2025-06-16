// /******************************************************************************
// * Author: Jay Vardhan Vashishtha              
// * Date: 28/02/2025                             
// * Time: 21:14:11                             
// * Problem: B_Perfecto.cpp              
// ******************************************************************************/
// #include <bits/stdc++.h>
// using namespace std;
// #define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define int long long
// #define endl "\n"
// #define vi vector<int>
// #define vvi vector<vi>
// #define pii pair<int, int>
// #define vpii vector<pii>
// #define all(x) (x).begin(), (x).end()
// #define sortall(x) sort(all(x))
// #define debug(x) cout << #x << " : " << x << endl
// #define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// const int MOD = 1e9 + 7;
// const int INF = 1e18;
// const int N = 1e5 + 5;
// bool isper(int n) {
//     int r = (int)sqrt(n);
//     return r * r == n;
// }
// /********************************** SOLUTION **********************************/
// void solve() {
//     int n;
//     cin >> n;
//     int x = n * (n + 1) / 2;
//     if (isper(x)) {
//         cout << -1 << endl;
//         return;
//     }
//     queue<int>q;
//    set<int> st2;
//    for(int i=1;i<=n;i++)if(i!=2)q.push(i);
//    cout<<2<<" ";
//    st2.insert(2);
//    int pre=2;n--;
//    while(n--){

//     while(isper(q.front()+pre)){
//         q.push(q.front());
//         q.pop();
//     }
//     cout<<q.front()<<" ";
//     pre+=q.front();
//     q.pop();
//    }


//     cout << endl;
// }
// /********************************** MAIN FUNCTION *****************************/
// int32_t main() {
//     fastIO;
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
              int n;
              cin>>n;
             vector<int>ans;
             if(n==1){
                cout<<-1<<endl;
                continue;
             }
               int p=(n*(n+1))/2;
             if(p==(sqrt(p)*sqrt(p))){
                cout<<-1<<endl;
                continue;
             }



           int s=0;

           for(int i=0;i<n;i++){
            ans.push_back(i+1);
           }


           for(int i=0;i<n-1;i++){
           s+=(ans[i]);
            if((s)==(sqrt(s)*sqrt(s))){
                s-=ans[i];
                swap(ans[i],ans[i+1]);
            }
           s+=ans[i];
           }
          
           s+=ans[n-1];
           if((s)==(sqrt(s)*sqrt(s))){
            swap(ans[n-1],ans[n-2]);
        }


             for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
             }

             cout<<endl;

             
    }
}