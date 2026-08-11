/*
Cyclic sort works only when:

✅ Array contains numbers from 1 to n
(or sometimes 0 to n)
with no missing / no duplicates (basic version)
*/

// For numbers from 1 to n

#include <iostream>
#include <algorithm>
using namespace std;

void cyclicSort(int arr[], int n) {
    int i = 0;
    while(i < n) {
        int correctIdx = arr[i] - 1;

        if(arr[i] != arr[correctIdx]) {
            swap(arr[i], arr[correctIdx]);
        } else {
            i++;
        }
    }
}

int main() {
    int arr[] = {3, 5, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cyclicSort(arr, n);

    cout << "After sorting:  ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


/*
⏱️ Time Complexity (TC)
✅ O(n)

Because every element is swapped at most once into its correct place.

💾 Space Complexity (SC)
✅ O(1)

In-place

⭐ Extra Important Info

🔥 Cyclic sort is the base of many famous problems like:

Missing number

Find duplicate

Find all missing numbers

Set mismatch
*/