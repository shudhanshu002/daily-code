/*
Write a program to create a class Speed that allows users to input a speed value in kilometers per hour (km/h) and then convert and display it in meters per second (m/s). The program should use class type to basic type conversion to achieve this functionality.



Formula:

1km = 1000 meters

1hour = 3600 seconds

Input format :
The input consists of a floating-point number representing the speed in kilometers per hour (k/h).

Output format :
The output displays a float value after converting to meters per second (m/s), rounded off to three decimal places.



Refer to the sample output for the exact text.

Sample test cases :
Input 1 :
1.1
Output 1 :
0.306 m/s
Input 2 :
12.9
Output 2 :
3.583 m/s
*/


#include <iostream>
#include <iomanip> // For setprecision and fixed
using namespace std;

// Speed Class Definition
class Speed {
private:
    double kmh; // Speed in kilometers per hour

public:
    // Constructor to initialize speed in km/h
    Speed(double speed_kmh) : kmh(speed_kmh) {}

    // Conversion operator to convert Speed object to double (m/s)
    operator double() const {
        return kmh / 3.6; // Convert km/h to m/s
    }
};

int main() {
    double input_kmh;

    // Read the speed in km/h from the user
    cin >> input_kmh;

    // Create a Speed object with the input speed
    Speed speed(input_kmh);

    // Convert the Speed object to m/s using the conversion operator
    double speed_ms = speed; // Implicitly calls operator double()

    // Display the speed in m/s with three decimal places
    cout << fixed << setprecision(3) << speed_ms << " m/s" << endl;

    return 0;
}
