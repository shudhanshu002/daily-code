#include <iostream>
using namespace std;

class Integer {
private:
    int x; // Private member variable to hold the integer value
public:
    void setData(int a) {
        x = a; // Set the value of x
    }
    
    void showData() {
        cout << "x = " << x << endl; // Display the value of x
    }
    
    // Overloading the pre-increment operator
    Integer operator++() {
        Integer i; // Create a new Integer object
        i.x = ++x; // Increment x and assign it to the new object's x
        return i; // Return the new object
    }

    // Overloading the post-increment operator
    Integer operator++(int) {
        Integer i; // Create a new Integer object
        i.x = x++; // Assign the current value of x to the new object's x, then increment x
        return i; // Return the new object
    }
};

int main() {
    Integer i1, i2; // Create two Integer objects
    i1.setData(3); // Set i1's value to 3
    i1.showData(); // Display i1's value
    
    i2 = ++i1; // Pre-increment i1 and assign the result to i2
    i2.showData(); // Display i2's value
    i1.showData(); // Display i1's value

    i2 = i1++; // Post-increment i1 and assign the result to i2
    i2.showData(); // Display i2's value
    i1.showData(); // Display i1's value
}


