/*
3. const_cast
const_cast is used to add or remove the const qualifier from a variable.
 It is useful when you need to modify a constant value or when dealing with APIs that expect non-const pointers but you want to keep your data constant.
*/

#include <iostream>
using namespace std;

void modifyValue(const int* ptr) {
    // Attempting to modify the value pointed to by ptr will fail if it's declared as const
    int* nonConstPtr = const_cast<int*>(ptr);
    *nonConstPtr = 20; // Modifying the value (dangerous!)
}

int main() {
    int value = 10;
    const int* ptr = &value;

    modifyValue(ptr); // This will modify value

    cout << "Value after modification: " << value << endl; // Output: 20
    return 0;
}
