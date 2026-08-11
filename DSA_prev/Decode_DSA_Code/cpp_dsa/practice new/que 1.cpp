/*
Create a Vehicle class that uses a parameterized constructor to initialize the registration number, make, model, and year of manufacture. Implement a method called displayDetails to print these attributes. Ensure that the class can handle string inputs for the vehicle details.

Input format :
The input consists of four lines, each containing:

A string representing the registration number.
A string representing the make of the vehicle.
A string representing the model of the vehicle.
An integer representing the year of manufacture.
Output format :
The output prints the following, each containing the details of a vehicle in the following format:

Registration Number: [registration number]

Make: [make]

Model: [model]

Year of Manufacture: [year of manufacture]



Refer to the sample output for the exact format.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1900 ≤ year of manufacture ≤ 2100

Sample test cases :
Input 1 :
KA-01-HH-1234
Toyota
Corolla
2022
Output 1 :
Registration Number: KA-01-HH-1234
Make: Toyota
Model: Corolla
Year of Manufacture: 2022
*/

#include <iostream>
#include <string>
using namespace std;

class vehical
{
private:
    string regNo;
    string make;
    string model;
    int year;
public:
    vehical( string regNo,string make,string model,int year){
        this->regNo = regNo;
        this->make=make;
        this->model=model;
        this->year=year;
    }

    void display() const {
        cout << "Registration Number: " << regNo << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year of Manufacture: " << year << endl;
    }


};


int main() {
    string registrationNumber, make, model;
    int yearOfManufacture;

    // Input for vehicle details
    getline(cin, registrationNumber);
    getline(cin, make);
    getline(cin, model);
    cin >> yearOfManufacture;

    // Create asing the input values
    vehical veh(registrationNumber, make, model, yearOfManufacture);


    veh.display();

    return 0;
}
