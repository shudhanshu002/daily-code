
/*
Why Use a Virtual Destructor?
When you delete an object of a derived class through a base class pointer,
 if the destructor in the base class is not virtual,
    only the base class destructor will be called,
    leading to incomplete destruction of the derived class.
     This can result in resource leaks or undefined behavior,
     especially if the derived class allocates dynamic resources.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    virtual ~Base() { // Virtual destructor
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor called." << endl; }
    ~Derived() { // Destructor for Derived
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Base* b = new Derived(); // Create a Derived object with a Base pointer
    delete b; // Correctly deletes Derived and then Base

    return 0;
}
