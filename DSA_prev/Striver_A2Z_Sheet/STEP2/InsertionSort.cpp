// we take as till this pointer it is sorted and we have to maintain the sorted part sorted while moving ahead

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(arr[j] >= arr[j - 1]) break;
            swap(arr[j], arr[j - 1]);
        }
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

When array is reverse sorted: [5,4,3,2,1]

Average Case: O(n²)
Best Case: O(n)

When array is already sorted (because of the break)

💾 Space Complexity (SC)
✅ O(1)

In-place

⭐ Extra Info (Important)

✅ Stable sort
Insertion sort keeps the relative order of equal elements.
*/