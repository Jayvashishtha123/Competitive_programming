/**********************************let's begin**********************************/
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
     int n;cin>>n;
    vpii vp; 
    vi fst,snd;
    priority_queue<int> max1,max2;
    priority_queue<int , vector<int> , greater<int> > min1,min2;
 
   
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        max1.push(x);min1.push(x);
        max2.push(y);min2.push(y);
        fst.push_back(x);
        snd.push_back(y);
        vp.push_back(make_pair(x,y));
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int ans=INF;
    for(int i=0;i<n;i++){
        int x=fst[i];
        int y=snd[i];
        //For length.........
        int length=-1;
        priority_queue<int> maxi1=max1;
        priority_queue<int,vector<int>, greater<int> > mini1=min1;
        if(maxi1.top()==x)maxi1.pop();
        if(mini1.top()==x)mini1.pop();
        if (!maxi1.empty() && !mini1.empty()) {
            length = (maxi1.top() - mini1.top() + 1);
        }
        
        //For Bredth..............
        int bredth=-1;
        priority_queue<int> maxi2=max2;
        priority_queue<int,vector<int>, greater<int> > mini2=min2;
        if(maxi2.top()==y)maxi2.pop();
        if(mini2.top()==y)mini2.pop();
        if(!maxi2.empty() && !mini2.empty())
        bredth = (maxi2.top()-mini2.top()+1);
 
        int area=bredth*length;
 
        if(area == (n-1) ){
            if(length<n && bredth<N)
            area+=min(length,bredth);
            else if(length==N) area+= bredth;
            else area+= length;
        }
 
        ans=min(ans,area);
 
    }
 
    cout<<ans<<endl;
 
    
 
 
}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now(); // Start measuring time
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now(); // End measuring time
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; // Print execution time
    return 0;
}
