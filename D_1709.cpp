/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
// #define LOCAL
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
void solve(istream &cin, ostream &cout) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    vpii vp;
    int cnt=0;
    map<int,pair<char,int>> mp;
    for(int i=0;i<n;i++){
        mp[a[i]].first='a';
        mp[a[i]].second=i;

        mp[b[i]].first='b';
        mp[b[i]].second=i;
    }
    for(int i=0;i<n;i++){
        if(a[i]==(i+1))continue;
        int idx = mp[i+1].second;
        char arr = mp[i+1].first;
        if(arr=='a'){
        for(int j=idx-1;j>=i;j--){
            swap(a[j],a[j+1]);
            int idx1 = mp[a[j]].second;
            int idx2 = mp[a[j+1]].second;
            mp[a[j+1]].second = idx1;
            mp[a[j]].second = idx2;

            vp.push_back(make_pair(1,j+1));
        }
    }else{
        for(int j=idx-1;j>=i;j--){
            swap(b[j],b[j+1]);
            int idx1 = mp[b[j]].second;
            int idx2 = mp[b[j+1]].second;
            mp[b[j+1]].second = idx1;
            mp[b[j]].second = idx2;
            vp.push_back(make_pair(2,j+1));
        }
        swap(a[i],b[i]);
        mp[a[i]].first='b';
        mp[b[i]].first='a';

        vp.push_back(make_pair(3,i+1));
    }
    }

    for(int i=0;i<n;i++){
        if(a[i]==(n+i+1))continue;
        int idx = mp[n+i+1].second;
        char arr = mp[n+i+1].first;
         for(int j=idx-1;j>=i;j--){
            swap(b[j],b[j+1]);
            int idx1 = mp[b[j]].second;
            int idx2 = mp[b[j+1]].second;
            mp[b[j+1]].second = idx1;
            mp[b[j]].second = idx2;
            vp.push_back(make_pair(2,j+1));
        }

        
    }
    if(vp.size()>1709){
        cout<<"No"<<endl;
    }else{
        cout<<vp.size()<<endl;
        for(int i=0;i<vp.size();i++){
            cout<<vp[i].first<<' '<<vp[i].second<<endl;
        }
    }


    
}


/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        solve(cin,cout);
    }
    return 0;
}