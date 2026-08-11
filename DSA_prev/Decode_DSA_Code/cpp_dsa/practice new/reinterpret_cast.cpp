/*
4. reinterpret_cast
reinterpret_cast is the most dangerous cast in C++. It allows you to convert any pointer type to any other pointer type, even if they are unrelated.
 It's often used for low-level programming, such as interfacing with hardware or performing byte manipulations.
*/

#include <iostream>
using namespace std;

class Base {
public:
    int a;
};

class Derived {
public:
    int b;
};

int main() {
    Base baseObj;
    baseObj.a = 10;

    // Using reinterpret_cast to cast between unrelated types
    Derived* derivedPtr = reinterpret_cast<Derived*>(&baseObj);
    derivedPtr->b = 20; // This is dangerous!

    cout << "Base a: " << baseObj.a << endl; // Output: 10
    cout << "Derived b: " << derivedPtr->b << endl; // Output: 20
    return 0;
}
