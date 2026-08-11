#include <iostream>

class Base {
public:
    virtual void show() { // Virtual function
        std::cout << "Base class show function called." << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override { // Override the virtual function
        std::cout << "Derived class show function called." << std::endl;
    }
};

int main() {
    Base* b;          // Base class pointer
    Derived d;       // Derived class object
    b = &d;          // Pointing to derived class object

    b->show();       // Calls Derived's show() because of virtual function

    return 0;
}

