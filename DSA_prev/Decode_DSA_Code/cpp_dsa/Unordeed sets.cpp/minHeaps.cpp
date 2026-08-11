#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Declare a min-heap (priority_queue with greater comparator)
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Add some elements
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(1);

    // Access and remove the smallest element
    std::cout << "Min element: " << minHeap.top() << std::endl;  // Should print 1
    minHeap.pop();

    std::cout << "Next min element: " << minHeap.top() << std::endl;  // Should print 5

    return 0;
}

