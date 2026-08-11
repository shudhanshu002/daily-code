/*
. Memory Leaks and Best Practices
A memory leak occurs when memory is dynamically allocated using new, but never freed using delete. This can lead to excessive memory consumption and potentially crash your application.

Best practices:

Always match each new with a corresponding delete and each new[] with delete[].
Consider using smart pointers like std::unique_ptr and std::shared_ptr (introduced in C++11) to automatically manage dynamic memory and avoid memory leaks.
*/

#include <iostream>
#include <memory>  // For smart pointers
using namespace std;

int main() {
    // Using a smart pointer to manage dynamic memory
    unique_ptr<int> p(new int);
    unique_ptr<char> c(new char);
    unique_ptr<string> st(new string);
    *c = 'c';
    *p = 100;
    *st = "sudhanshu kumar singh";
    cout << "Value: " << *p << endl;
    cout << "Value: " << *c << endl;
    cout << "Value: " << *st << endl;

    unique_ptr<int[]> arr(new int[5]);

    // Initialize the array elements
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;  // Assign values 1 to 5
    }

    // Print the array elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // No need to manually delete p, it will be deleted automatically
    return 0;
}
