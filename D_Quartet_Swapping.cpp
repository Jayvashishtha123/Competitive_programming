#include <bits/stdc++.h>
using namespace std;

void processTestCases() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int arraySize;
        cin >> arraySize;
        vector<int> inputArray(arraySize), oddIndexedElements, evenIndexedElements;

        for (int &element : inputArray) 
            cin >> element;

        for (int i = 0; i < arraySize; i++) {
            if (i % 2 == 0) 
                evenIndexedElements.push_back(inputArray[i]);
            else 
                oddIndexedElements.push_back(inputArray[i]);
        }

        auto countInversions = [](vector<int> &array) {
            int inversionCount = 0;
            int maxValue = *max_element(array.begin(), array.end());
            vector<int> bitTree(maxValue + 2, 0);

            for (int i = array.size() - 1; i >= 0; --i) {
                for (int x = array[i]; x > 0; x -= x & -x) 
                    inversionCount += bitTree[x];
                for (int x = array[i]; x <= maxValue; x += x & -x) 
                    bitTree[x]++;
            }
            return inversionCount % 2;
        };

        int oddParity = countInversions(oddIndexedElements);
        int evenParity = countInversions(evenIndexedElements);

        sort(oddIndexedElements.begin(), oddIndexedElements.end());
        sort(evenIndexedElements.begin(), evenIndexedElements.end());

        if (oddParity != evenParity) {
            vector<int> oddAlternative = oddIndexedElements;
            vector<int> evenAlternative = evenIndexedElements;

            if (oddIndexedElements.size() > 1) 
                swap(oddAlternative[oddIndexedElements.size() - 2], oddAlternative[oddIndexedElements.size() - 1]);
            if (evenIndexedElements.size() > 1) 
                swap(evenAlternative[evenIndexedElements.size() - 2], evenAlternative[evenIndexedElements.size() - 1]);

            vector<int> sortedOddResult(arraySize), sortedEvenResult(arraySize);
            for (int i = 0, evenIndex = 0, oddIndex = 0; i < arraySize; i++) 
                sortedOddResult[i] = (i % 2 == 0) ? evenIndexedElements[evenIndex++] : oddAlternative[oddIndex++];
            for (int i = 0, evenIndex = 0, oddIndex = 0; i < arraySize; i++) 
                sortedEvenResult[i] = (i % 2 == 0) ? evenAlternative[evenIndex++] : oddIndexedElements[oddIndex++];

            if (sortedOddResult < sortedEvenResult) 
                swap(oddIndexedElements, oddAlternative);
            else 
                swap(evenIndexedElements, evenAlternative);
        }

        for (int i = 0, evenIndex = 0, oddIndex = 0; i < arraySize; i++) 
            cout << ((i % 2 == 0) ? evenIndexedElements[evenIndex++] : oddIndexedElements[oddIndex++]) << " ";
        cout << endl;
    }
}

int main() {
    processTestCases();
    return 0;
}
