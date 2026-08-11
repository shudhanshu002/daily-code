#include <iostream>
using namespace std;

int main() {
    // Dynamically allocating an integer
    int* p = new int;
    *p = 42;  // Assigning a value to the dynamically allocated memory
    cout << "Value: " << *p << endl; // Output: 42

    // Deallocating memory using delete
    delete p;
    return 0;
}

