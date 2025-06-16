/******************************************************************************
Author: Jay Vashishtha
Date: 07/01/2025
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
void solve() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    vector<int> vi;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            vi.push_back(v[i]);
            i++;
        }
    }
    if(vi.size()<4){
        cout<<"NO"<<endl;
        return;
    }
    int a=vi[0];
    int b=vi[1];
    int c=vi[vi.size()-1];
    int d=vi[vi.size()-2];
    cout<<"YES"<<endl;

    int ans=0;
    ans=max(ans,(d-a)*(c-b));
    bool is=false;
    if((c-a)*(d-b)>ans){
    ans=(c-a)*(d-b);
    is=true;
    }    
if(is){
cout<<a<<" "<<b<<" "<<a<<" "<<d<<" "<<c<<" "<<b<<" "<<c<<" "<<d<<endl;
    }else{
cout<<a<<" "<<b<<" "<<a<<" "<<c<<" "<<d<<" "<<b<<" "<<d<<" "<<c<<endl;
    }
}
int32_t main() {
    IOS;
    int t;cin>>t;
    while(t--){
    solve();}
    return 0;
}