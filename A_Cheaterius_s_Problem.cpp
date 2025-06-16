/******************************************************************************
Author: Jay Vashishtha
Date: 04/01/2025
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    set<map<char,int>> mp;  

    while (n--) { 
        
        map<char,int> dm; 
        for (int i = 0; i < 2; i++) {
            int x;cin>>x;
            dm[x]++;
        }
        if (dm.find('*'!=dm.end()) ) {
            continue; 
        }
        for (int i = 0; i < 2; i++) {
            cin >> dm[i];
        }


        sort(dm.begin(), dm.end());  
        mp.insert(dm);
    }
    
    cout << mp.size() << endl;  
}

int32_t main() {
    IOS;
    solve();
    return 0;
}
