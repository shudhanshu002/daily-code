/*
C++ uses three main keywords for exception handling:

try: This block contains code that might throw an exception.
throw: This keyword is used to signal that an exception has occurred. You can throw an exception with a specific type (like int, std::string, or any user-defined type).
catch: This block handles the exception thrown by the try block.
*/
#include <iostream>
#include <stdexcept> // For standard exception classes
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    try {
        divide(x, y); // Call the function that might throw
    } catch (const std::invalid_argument& e) { // Catching specific exception
        cout << "Error: " << e.what() << endl; // Print the error message
    } catch (...) { // Catching any other exceptions
        cout << "An unexpected error occurred." << endl;
    }

    return 0;
}

