#include <iostream>
using namespace std;

int main() {
    // Dynamically allocating an array of 5 integers
    int* arr = new int[5];

    // Initializing the array elements
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1; // Assign 1 to 5
    }

    // Output the array values
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory for the array
    delete[] arr;
    return 0;
}

