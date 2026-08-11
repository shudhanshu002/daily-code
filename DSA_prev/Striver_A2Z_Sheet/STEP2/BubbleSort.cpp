#include <iostream>
#include <algorithm>  // for swap
using namespace std;

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort (Optimized)
    for(int i = 0; i < n - 1; i++) {
        bool flag = false;

        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }

        if(!flag) break; // no swaps => already sorted
    }

    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


/*
⏱️ Time Complexity (TC)
✅ Worst Case: O(n²)

When array is in reverse order
Example: [5,4,3,2,1]

✅ Average Case: O(n²)
✅ Best Case (with flag optimization): O(n)

When array is already sorted
Example: [1,2,3,4,5]

💾 Space Complexity (SC)
✅ O(1)

Because bubble sort sorts in-place (no extra array used)

⭐ Extra Important Info

✅ Stable Sort
Bubble sort is stable (equal elements keep their order)

✅ In-place Sort
No extra memory required
*/