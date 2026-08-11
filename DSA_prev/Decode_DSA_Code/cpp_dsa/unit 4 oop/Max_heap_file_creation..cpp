#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap; // Vector to store the heap elements

    // Heapify up to maintain the max heap property after insertion
    void heapifyUp(int index) {
        int parent = (index - 1) / 2; // Find the parent index
        // If the element is greater than its parent, swap them and continue heapifying up
        if (index > 0 && heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            heapifyUp(parent); // Recursively heapify up the parent node
        }
    }

    // Heapify down to maintain the max heap property after deletion
    void heapifyDown(int index) {
        int largest = index;              // Assume current index is largest
        int leftChild = 2 * index + 1;    // Calculate left child index
        int rightChild = 2 * index + 2;   // Calculate right child index

        // Check if left child exists and is greater than current largest
        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }

        // Check if right child exists and is greater than current largest
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }

        // If largest is not the current index, swap and continue heapifying down
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest); // Recursively heapify down the swapped child node
        }
    }

public:
    // Insert a new element to the max heap
    void insert(int value) {
        heap.push_back(value);         // Add the new element at the end
        heapifyUp(heap.size() - 1);    // Heapify up from the new element's index
    }

    // Extract the maximum element (root) from the heap
    int extractMax() {
        if (heap.empty()) {
            throw runtime_error("Heap is empty");
        }

        int maxVal = heap[0];          // Root element is the max value
        heap[0] = heap.back();         // Move the last element to the root
        heap.pop_back();               // Remove the last element
        heapifyDown(0);                // Heapify down from the root
        return maxVal;
    }

    // Display heap elements
    void display() {
        cout << "Max Heap elements: ";
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap maxHeap;

    // Insert elements into the max heap
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(15);
    maxHeap.insert(30);
    maxHeap.insert(40);

    // Display the max heap
    maxHeap.display();

    // Extract and display the maximum element
    cout << "Extracted max: " << maxHeap.extractMax() << endl;

    // Display the max heap after extraction
    maxHeap.display();

    return 0;
}
