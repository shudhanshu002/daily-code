#include <iostream>
#include <vector>
using namespace std;

// Merge function to merge two sorted halves
void merge(vector<int> &p1, vector<int> &p2, vector<int> &arr) {
    int i = 0, j = 0, k = 0;
    while (i < p1.size() && j < p2.size()) {
        if (p1[i] < p2[j]) {
            arr[k++] = p1[i++];
        } else {
            arr[k++] = p2[j++];
        }
    }

    // Copy remaining elements
    while (i < p1.size()) arr[k++] = p1[i++];
    while (j < p2.size()) arr[k++] = p2[j++];
}

// Merge Sort function
void mergeSort(vector<int> &arr) {
    int n = arr.size();
    if (n <= 1) return;  // Base case: If the array has 1 or 0 elements, it's already sorted

    int n1 = n / 2, n2 = n - n1;
    vector<int> p1(n1), p2(n2);

    // Copy data to subarrays
    for (int i = 0; i < n1; i++) p1[i] = arr[i];
    for (int i = 0; i < n2; i++) p2[i] = arr[i + n1];

    // Recursively sort the subarrays
    mergeSort(p1);
    mergeSort(p2);

    // Merge sorted halves
    merge(p1, p2, arr);
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11, 90, 34, 50};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    mergeSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

