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
void solve() {
   int n;cin>>n;
   vi v(n),vv(n);
   set<pair<int,int>> st;
   for(int i=0;i<n;i++)cin>>v[i];
   for(int i=0;i<n;i++)cin>>vv[i];
   int same=0;int count=0;
   for(int i=0;i<n;i++){
    if(st.find({v[i],vv[i]})==st.end() && st.find({vv[i],v[i]})==st.end() && v[i]!=vv[i]){
        st.insert({v[i],vv[i]});
        st.insert({vv[i],v[i]});
        count++;
    }
       if(v[i]==vv[i])same++;
   }
   if(n%2==0 && count!=(n/2)){
    cout<<-1<<endl;
    return;
   }
    if(n%2==1 && count!=((n-1)/2)){
     cout<<-1<<endl;
     return;
    }

   if(same>=2){
    cout<<-1<<endl;
    return;
   }
   int idx=-1;
   for(int i=0;i<n;i++){
    if(v[i]==vv[i]){
        idx=i;
        break;
    }
   }
   vector<pair<int,int>> ans;
   int cnt=0;
   if(idx!=-1 && idx!=(n-1)/2){
    int idx2=(n-1)/2;
    ans.push_back({idx+1,idx2+1});
    cnt++;
    swap(v[idx],v[idx2]);
    swap(vv[idx],vv[idx2]);
   }
   map<pair<int,int>,int> mp;
   for(int i=0;i<n;i++){
    pair<int,int> p={v[i],vv[i]};
    mp[p]=i;
   }
   for(int i=0;i<n/2;i++){
    pair<int,int> p={v[i],vv[i]};
    pair<int,int> p2={vv[i],v[i]};
    if(mp[p2]==(n-i-1)){
        continue;
    }else{
        int idx1=mp[p2];
        pair<int,int> p3={v[n-i-1],vv[n-i-1]};
        mp[p3]=idx1;
        ans.push_back({idx1+1,n-i});
        cnt++;
        swap(v[idx1],v[n-i-1]);
        swap(vv[idx1],vv[n-i-1]);
    }
   }
   cout<<cnt<<endl;
    for(auto it:ans){
     cout<<it.first<<" "<<it.second<<endl;
    }
}
int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}