#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

// Min heap implementation
class MinHeap {
public:
    int arr[50];
    int idx;

    MinHeap() {
        idx = 1;  // Start indexing from 1 for easier heap operations
    }

    // Get the top (minimum) element
    int top() {
        if (idx > 1) {  // Ensure heap is not empty
            return arr[1];  // The top element is at index 1
        }
        return -1;  // Return -1 or handle empty case as you prefer
    }

    // Push an element into the heap
    void push(int x) {
        arr[idx] = x;  // Insert the new element at the current index
        int i = idx;
        idx++;  // Move to the next index

        // Heapify upwards
        while (i != 1) {
            int parent = i / 2;
            if (arr[i] < arr[parent]) {
                swap(arr[i], arr[parent]);  // Swap if child is smaller than parent
            } else {
                break;  // Stop if heap property is maintained
            }
            i = parent;  // Move up to the parent
        }
    }

    // Get the current size of the heap
    int size() {
        return idx - 1;  // idx points to the next empty index, so size is idx - 1
    }

    void pop () {
        idx--;
        arr[1]=arr[idx];
        int i =1;
        while(true) {
            int left=2*i;
            int right=left+1;
            if(left>idx-1) break;
            if(right>idx-1) {
                if(arr[i]>arr[left]) {
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            if(arr[left]<=arr[right] && arr[i]>arr[left]) {
                swap(arr[i],arr[left]);
                 i=left;

            }
            else break;
            if(arr[left]>arr[right] && arr[i]>arr[right]) {
                swap(arr[i],arr[right]);
                 i=right;

            }
            else break;
        }
    }
};

int main() {
    MinHeap pq;
    pq.push(90);
    pq.push(20);

    cout << "Heap size: " << pq.size() << endl;
    cout << "Top element: " << pq.top() << endl;  // Should output the minimum (20 in this case)
    pq.pop();
    pq.pop();
    cout << "Top element: " << pq.top() << endl;

    return 0;
}

