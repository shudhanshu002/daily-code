#include <iostream>
#include <algorithm>  // for swap
#include <climits>    // for INT_MAX
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection Sort
    for(int i = 0; i < n - 1; i++) {
        int minVal = INT_MAX;
        int minIdx = -1;

        for(int j = i; j < n; j++) {
            if(arr[j] < minVal) {
                minVal = arr[j];
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
⏱️ Time Complexity (TC)
Worst Case: O(n²)
Average Case: O(n²)
Best Case: O(n²)

(Selection sort always scans full remaining array even if already sorted)

💾 Space Complexity (SC)
✅ O(1)

In-place sorting

⭐ Extra Important Info

❌ Not stable (by default)
Because swapping can change the relative order of equal elements.

✅ Performs minimum swaps
Only (n-1) swaps maximum, which is good when swapping is expensive.
*/