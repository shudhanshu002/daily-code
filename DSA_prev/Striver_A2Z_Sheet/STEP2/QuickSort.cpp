#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(i <= high && arr[i] <= pivot) i++;
        while(j >= low && arr[j] > pivot) j--;

        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if(low >= high) return;

    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "After sorting:  ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


/*
⏱️ Time Complexity (TC)
✅ Best Case: O(n log n)

When pivot divides array into 2 equal halves

✅ Average Case: O(n log n)
❌ Worst Case: O(n²)

When pivot is always smallest/largest
Example: already sorted array if pivot = first element

💾 Space Complexity (SC)
Average: O(log n) (recursion stack)
Worst: O(n) (when recursion becomes skewed)
⭐ Extra Important Info

✅ Quick sort is in-place (no extra array like merge sort)
❌ Not stable
🔥 Usually faster than merge sort in practice
*/