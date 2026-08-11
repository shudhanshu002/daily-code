#include <iostream>
using namespace std;
class MyClass {
public:
    void display(); // Declaration of member function
    int coun();
};

// Definition of the member function outside the class
void MyClass::display() {
    std::cout << "Hello from MyClass!" << std::endl;
}

int MyClass::coun(){
    cout<<"yes count accesed";
}

int main() {
    MyClass obj; // Create an instance of MyClass
    obj.display(); // Call the member function
    obj.coun();

    return 0;
}

