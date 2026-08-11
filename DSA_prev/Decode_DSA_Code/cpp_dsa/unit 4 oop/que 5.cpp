/*
Ajay is working for a road construction company and wants to convert the given distance from kilometers to miles. So he is creating a program that converts a given distance in kilometers to miles using basic to class type conversion.



Help him implement a Distance class with private member variables for kilometers and miles and a constructor that performs the conversion. The program should prompt the user for a distance in kilometers and then display the converted distance in kilometers and miles, both formatted with two digits after the decimal point.



Formula:  miles = km * 0.621371

Input format :
The input consists of a double value representing the distance in kilometers.

Output format :
The first line of the output displays the distance in kilometers with two decimal places.

The second line displays the distance in miles with two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
1.0 ≤ distance in kilometers ≤ 100.0

Sample test cases :
Input 1 :
10.0
Output 1 :
Kilometers: 10.00 km
Miles: 6.21 miles
Input 2 :
35.4
Output 2 :
Kilometers: 35.40 km
Miles: 22.00 miles
*/

#include <iostream>
#include <iomanip>  // For formatting output
using namespace std;

class Distance {
private:
    double kilometers;
    double miles;

public:
    // Constructor for basic to class type conversion (from double to Distance)
    Distance(double km) : kilometers(km), miles(km * 0.621371) {}

    // Function to display both kilometers and miles with two decimal places
    void display() const {
        // Display kilometers with 2 decimal places
        cout << fixed << setprecision(2);  // Set precision to 2 decimal places
        cout << "Kilometers: " << kilometers << " km" << endl;
        // Display miles with 2 decimal places
        cout << "Miles: " << miles << " miles" << endl;
    }
};

int main() {
    double km;
    // Prompt user for the input distance in kilometers
    cin >> km;

    // Create an object of Distance using the input kilometers
    Distance dist(km);

    // Display the converted kilometers and miles
    dist.display();

    return 0;
}

