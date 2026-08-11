/*
1. static_cast
static_cast is used for compile-time type conversions.
 It's the most common cast and is safe when you are sure of the type relationships at compile time.
 It can be used to convert between related classes (base and derived).
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
    Base* b = new Derived(); // Upcasting
    Derived* d = static_cast<Derived*>(b); // Downcasting
    d->show(); // Calls Derived's show function

    delete b;
    return 0;
}

