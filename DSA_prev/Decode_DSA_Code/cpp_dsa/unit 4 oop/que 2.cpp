/*
Single File Programming Question
Problem Statement



Once upon a time in a quaint village, there lived a brilliant young programmer named Alice. She was fascinated by the magical world of Programming and decided to create her very own class called CustomString.



This class had a special power - whenever the ++ operator was applied, it would transform the first letter of the input string into a majestic capital letter. One day, a curious traveler arrived in the village, and Alice eagerly demonstrated the power of her CustomString class.



The traveler was amazed by the enchanting customization and couldn't help but smile as the modified string was displayed, adding a touch of magic to their conversation.

Input format :
The input consists of a string consisting of alphanumeric characters (both uppercase and lowercase) and symbols.

Output format :
The program should display the original and modified strings on separate lines.



Refer to the sample output for the formatting specifications.

Code constraints :
The input string will contain at most 100 characters.

The input string may consist of spaces, special symbols, and alphanumeric characters.

The first character of the string may be uppercase or lowercase.

Sample test cases :
Input 1 :
hello World!
Output 1 :
Original string: hello World!
Modified string: Hello World!
Input 2 :
Apple
Output 2 :
Original string: Apple
Modified string: Apple
Input 3 :
$10000
Output 3 :
Original string: $10000
Modified string: $10000
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
*/

#include <iostream>
#include <string>
using namespace std;

class CustomString {
private:
    string str;

public:
    // Constructor to initialize the string
    CustomString(string input) : str(input) {}

    // Overloading unary ++ operator to capitalize the first letter
    void operator++() {
        if (!str.empty() && islower(str[0])) {
            str[0] = toupper(str[0]);
        }
    }

    // Function to display the original string
    void displayOriginal() const {
        cout << "Original string: " << str << endl;
    }

    // Function to display the modified string
    void displayModified() const {
        cout << "Modified string: " << str << endl;
    }
};

int main() {
    string input;

    // Taking the input string
    getline(cin, input);

    // Creating an object of CustomString class
    CustomString customStr(input);

    // Display the original string
    customStr.displayOriginal();

    // Apply the ++ operator to modify the string
    ++customStr;

    // Display the modified string
    customStr.displayModified();

    return 0;
}

