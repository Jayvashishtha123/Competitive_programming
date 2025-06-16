#include <iostream>
#include <vector>
using namespace std;

// Query function to interact with the interactor
int query(int i, int j, int k) {
    cout << "? " << i << " " << j << " " << k << endl;
    int response;
    cin >> response;
    if (response == -1) {
        exit(0); // Stop on invalid query
    }
    return response;
}

// Output the solution
void output_solution(int i, int j, int k) {
    cout << "! " << i << " " << j << " " << k << endl;
}

void solve() {
    int n;
    cin >> n;

    // Start with an arbitrary triangle
    int a = 1, b = 2, c = 3;

    while (true) {
        int res = query(a, b, c);
        
        if (res == 0) { 
            // No points inside the triangle, found the solution
            output_solution(a, b, c);
            return;
        }

        // Update triangle by replacing one vertex with the returned point
        if (res == a) {
            a = res;
        } else if (res == b) {
            b = res;
        } else if (res == c) {
            c = res;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
