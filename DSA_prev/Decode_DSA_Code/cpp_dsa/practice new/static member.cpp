#include <iostream>
using namespace std;

class MyClass {
public:
    // Static variable declaration
    static int staticCounter;

    // Constructor increments the static variable
    MyClass() {
        staticCounter++; // Increment when a new object is created
    }

    // Static function to return staticCounter
    static int getStaticCount() {
        return staticCounter;
    }
};

// Definition of the static variable (must be done outside the class)
int MyClass::staticCounter = 0;

int main() {
    // Before creating any objects, staticCounter is 0
    cout << "Initial static counter: " << MyClass::getStaticCount() << endl;

    // Creating instances of MyClass
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // The staticCounter will be updated by all objects
    cout << "Static counter after creating three objects: " << obj1.getStaticCount() << endl;

    return 0;
}

