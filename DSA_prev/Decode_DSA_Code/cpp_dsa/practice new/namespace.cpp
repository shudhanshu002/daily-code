/*
Namespaces in C++ are a way to organize and encapsulate identifiers (such as variables, functions, and classes) to avoid naming conflicts. This is particularly useful in larger programs or when integrating multiple libraries that might use the same names.

Key Features of Namespaces
Avoid Naming Conflicts: Namespaces help prevent clashes between identifiers that have the same name.
Organize Code: They provide a way to group related code together, making it more readable and maintainable.
Nested Namespaces: You can nest namespaces within each other for further organization.
*/

#include <iostream>
using namespace std;

// Define a namespace
namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}
using namespace Math;
// Another namespace
namespace Utils {
    void printMessage(const string& message) {
        cout << "Message: " << message << endl;
    }
}

int main() {
    int x = 5, y = 3;

    // Using functions from Math namespace
    cout << "Sum: " <<add(x, y) << endl;           // Outputs: Sum: 8
    cout << "Difference: " << Math::subtract(x, y) << endl; // Outputs: Difference: 2

    // Using function from Utils namespace
    Utils::printMessage("Hello, World!"); // Outputs: Message: Hello, World!

    return 0;
}

