#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge two sorted halves
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low >= high) return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Before sorting: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "After sorting:  ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}


/*
⏱️ Time Complexity (TC)
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)

Merge sort is always n log n.

💾 Space Complexity (SC)
O(n)

Because merge step needs an extra temporary array.

⭐ Extra Important Info

✅ Stable sort
✅ Great for large arrays
❌ Not in-place (needs extra memory)
*/