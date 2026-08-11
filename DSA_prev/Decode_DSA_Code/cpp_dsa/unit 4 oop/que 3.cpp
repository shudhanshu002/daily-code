/*
Ragav is developing a text processing tool that needs to generate a repeated version of a given string. Your task is to create a RepeatableString class that encapsulates this functionality. The class should have a constructor that takes a string and stores it. It should also overload the * operator to repeat the stored string a specified number of times.



In the main function, read a string and an integer from the user, create an instance of RepeatableString with the input string, and use the overloaded * operator to produce and display the repeated string.

Input format :
The first line consists of a string, representing the input string (up to 100 characters).

The second line consists of an integer representing the number of repetitions.

Output format :
The output is a single line in the format Result: [repeatedString] where [repeatedString] is the input string repeated the specified number of times.



Refer to the sample output for the formatting specifications.

Code constraints :
The input string can contain any printable ASCII characters except for '\0' (null character).

1 ≤ repetitions ≤ 10

Sample test cases :
Input 1 :
this
4
Output 1 :
Result: thisthisthisthis
Input 2 :
S
6
Output 2 :
Result: SSSSSS
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
*/


#include <iostream>
#include <string>
using namespace std;

class RepeatableString {
private:
    string str;

public:
    // Constructor to initialize the string
    RepeatableString(string input) : str(input) {}

    // Overloading the * operator to repeat the string
    string operator*(int repetitions) {
        string result;
        for (int i = 0; i < repetitions; ++i) {
            result += str;
        }
        return result;
    }
};

int main() {
    string input;
    int repetitions;

    // Taking input for the string
    getline(cin, input);

    // Taking input for the number of repetitions
    cin >> repetitions;

    // Creating an object of RepeatableString class
    RepeatableString repeatable(input);

    // Applying the * operator and displaying the repeated string
    cout << "Result: " << repeatable * repetitions << endl;

    return 0;
}

