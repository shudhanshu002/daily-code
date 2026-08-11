#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Start from index 1 (for 1-based indexing)
        cout << arr[i] << " ";
    }
    cout << endl;
}
void heapify(int i ,int arr[],int n)  {
     while(true) {
            int left = 2*i;
            int right = left+1;
            if(left>=n) break;
            if(right>=n) {
                if(arr[i]<arr[left]) {
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }

            if(arr[left] >= arr[right] && arr[i]<arr[left]) {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(arr[right]>arr[left] && arr[i]<arr[right]) {
                swap(arr[i] , arr[right]);
                i=right;
            }
            else break;
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
