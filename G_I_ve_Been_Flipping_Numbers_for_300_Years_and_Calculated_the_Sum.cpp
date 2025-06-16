#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef long long ll;
const ll MOD = 1000000007;

// Inline function for modular multiplication
inline ll modMul(ll a, ll b) {
    return (a * b) % MOD;
}

// Function to reverse digits in a given base
ll revBase(int n, int p, vector<vector<ll>>& dp) {
    if (n < p) return n % MOD;
    if (n < p * p) {
        if (dp[0][n] != -1) return dp[0][n];
        ll result = ((ll)(n % p) * p + (n / p)) % MOD;
        dp[0][n] = result; // Store the result
        return result;
    }

    if (dp[1][n] != -1) return dp[1][n];

    ll res = 0;
    int temp_n = n;
    while (temp_n > 0) {
        res = (res * p + (temp_n % p)) % MOD;
        temp_n /= p;
    }
    dp[1][n] = res; // Store the result
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int t; 
    cin >> t;

    while (t--) {
        int n; 
        ll k; 
        cin >> n >> k;
        ll ans = 0;

        if (k > n) {
            ll count = (k - max((ll)n + 1, 2LL) + 1) % MOD;
            ans = (ans + modMul(count, n)) % MOD;
        }

        // Initialize DP table
        vector<vector<ll>> dp(2, vector<ll>(n + 1, -1));

        int L_max = log2(n) + 1;

        // Iterate only through valid L values
        for (int L = 2; L <= L_max; L++) {
            int p_low = max(2, (int)(pow(n, 1.0 / L)));
            int p_high = min((int)(pow(n, 1.0 / (L - 1))), (int)min(k, (ll)n));

            if (p_low <= p_high) {
                // Calculate for this range of p directly
                for (int p = p_low; p <= p_high; p++) {
                    ans = (ans + revBase(n, p, dp)) % MOD;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
