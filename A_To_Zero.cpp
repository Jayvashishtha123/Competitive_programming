/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 17/03/2025                             
* Time: 20:05:14                             
* Problem: A_To_Zero.cpp              
******************************************************************************/
#include <bits/stdc++.h>
#define int long long
using namespace std;

/********************************** SOLUTION **********************************/
void solve() {
    int n, k;
    cin >> n >> k;

    
    if(n%2==0){
        int kk=k-1;
        cout<<(n+kk-1)/kk<<endl;
    }else{
        n-=k;
        k--;
        cout<<(n+k-1)/k+1<<endl;
    }
}

/********************************** MAIN FUNCTION *****************************/
signed main() {
    int t = 1; 
    cin >> t;  
    while (t--) {
        solve(); 
    }
    return 0;
}