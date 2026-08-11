#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Start from index 1 (for 1-based indexing)
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int i, int arr[], int n) {
    while (true) {
        int left = 2 * i;        // Left child index
        int right = left + 1;    // Right child index

        if (left >= n) break;    // If left child doesn't exist, exit

        int smallest = i;        // Assume current node is the smallest

        // If left child exists and is smaller than the current node
        if (left < n && arr[left] < arr[smallest]) {
            smallest = left;
        }

        // If right child exists and is smaller than the smallest node so far
        if (right < n && arr[right] < arr[smallest]) {
            smallest = right;
        }

        // If the smallest is still the current node, stop heapifying
        if (smallest == i) break;

        // Swap the current node with the smallest child
        swap(arr[i], arr[smallest]);

        // Continue heapifying from the smallest child
        i = smallest;
    }
}

int main() {
    int arr[] = {-1, 2,10, 14, 11, 1, 4};  // 1-based index, so start with -1 as placeholder
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate size

    print(arr, n);  // Print initial array

    // Build the heap from the last non-leaf node down to the root
    for (int i = n / 2; i >= 1; i--) {
        heapify(i, arr, n);
    }

    print(arr, n);  // Print the heapified array

    return 0;
}
