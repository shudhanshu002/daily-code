#include <iostream>
#include <vector>
using namespace std;

// Partition function (places pivot in correct position)
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; // Choosing last element as pivot
    int i = low - 1; // Index for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); // Swap smaller element with element at i
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in correct position
    return i + 1;
}

// Quick Sort function
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort left and right subarrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11, 90, 34, 50};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

