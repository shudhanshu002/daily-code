/*
2. dynamic_cast
dynamic_cast is used for safe downcasting in class hierarchies.
It works only with polymorphic types (i.e., classes that have at least one virtual function).
If the cast fails, it returns nullptr for pointers or throws an exception for references.
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base* b = new Base(); // Pointer of type Base
    Derived* d = dynamic_cast<Derived*>(b); // Downcasting

    if (d == nullptr) {
        cout << "Failed to cast Base* to Derived*." << endl; // Safe failure
    } else {
        d->show();
    }

    delete b;
    return 0;
}

