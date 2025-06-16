/******************************************************************************
* Author: Jay Vardhan Vashishtha              
* Date: 25/03/2025                             
* Problem: Interesting Ratios                
******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
const int MAX_N = 1e7 + 5;

/********************************** PRIMES PRECOMPUTATION **********************************/
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to precompute all primes up to MAX_N
vector<int> precomputePrimes() {
    vector<int> primes;
    for (int i = 2; i < MAX_N; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

/********************************** SOLUTION **********************************/
void solve(const vector<int>& primes) {
    int n;
    cin >> n;

    int count = 0;
    for (int p : primes) {
        if (p > n) break;  // Stop if the prime exceeds n
        count += n / p;  
    }
    cout << count << endl;
}

/********************************** MAIN FUNCTION **********************************/
int32_t main() {
    IOS;
    
    // Precompute primes once
    vector<int> primes = precomputePrimes();

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve(primes); // Solve each test case using precomputed primes
    }

    return 0;
}
