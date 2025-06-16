#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Merge Sort-based inversion counting
int mergeAndCount(vector<int> &arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left, invCount = 0;
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
            invCount += (mid - left + 1 - i); // Count inversions
        }
    }
    while (i < leftArr.size()) arr[k++] = leftArr[i++];
    while (j < rightArr.size()) arr[k++] = rightArr[j++];
    
    return invCount;
}

int mergeSortAndCount(vector<int> &arr, int left, int right) {
    if (left >= right) return 0;
    int mid = left + (right - left) / 2;
    int invCount = mergeSortAndCount(arr, left, mid);
    invCount += mergeSortAndCount(arr, mid + 1, right);
    invCount += mergeAndCount(arr, left, mid, right);
    return invCount;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), odd, even;
    for (int &x : a) cin >> x;

    for (int i = 0; i < n; i++) (i % 2 ? odd : even).push_back(a[i]);

    // Count inversions before sorting
    int oddParity = mergeSortAndCount(odd, 0, odd.size() - 1) % 2;
    int evenParity = mergeSortAndCount(even, 0, even.size() - 1) % 2;

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    if (oddParity != evenParity) {
        vector<int> oddAlt = odd, evenAlt = even;
        if (odd.size() > 1) swap(oddAlt[odd.size() - 2], oddAlt[odd.size() - 1]);
        if (even.size() > 1) swap(evenAlt[even.size() - 2], evenAlt[even.size() - 1]);

        vector<int> resultOdd(n), resultEven(n);
        for (int i = 0, oe = 0, oo = 0; i < n; i++) 
            resultOdd[i] = (i % 2 == 0) ? even[oe++] : oddAlt[oo++];
        for (int i = 0, oe = 0, oo = 0; i < n; i++) 
            resultEven[i] = (i % 2 == 0) ? evenAlt[oe++] : odd[oo++];

        // Choose the lexicographically smaller result
        if (resultOdd < resultEven) swap(odd, oddAlt);
        else swap(even, evenAlt);
    }

    for (int i = 0, oe = 0, oo = 0; i < n; i++) 
        cout << ((i % 2 == 0) ? even[oe++] : odd[oo++]) << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
