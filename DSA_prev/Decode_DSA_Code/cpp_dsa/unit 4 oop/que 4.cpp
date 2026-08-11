/*
In a distant realm where time was more than just numbers, a talented watchmaker named Edward crafted a unique Time class with the extraordinary ability to calculate time differences using the '-' operator.



One day, a curious young apprentice named Lily encountered Edward's creation and was fascinated by its time-manipulation powers. Eager to put it to the test, Lily entered two specific times into the console.



As the magical operator performed its calculations, the time difference was revealed, leaving Lily in awe of the operator overloading concept and its potential to unravel the mysteries of time in their timekeeping adventures.

Input format :
The first line of input consists of Time 1 in the format "hours minutes seconds," separated by spaces.

The second line of input consists of Time 2 in the format "hours minutes seconds," separated by spaces.

Each time component (hours, minutes, and seconds) should be entered as an integer.

Output format :
The first two lines of output display Time 1 and Time 2 in the format "hours h minutes m seconds s".

The next line of output displays the time difference between Time 1 and Time 2 in the same format.



Refer to the sample output for further formatting specifications.

Code constraints :
The hours, minutes, and seconds should be non-negative integers.

The hours should be in the range of [0, 23].

The minutes and seconds should be in the range of [0, 59].

Sample test cases :
Input 1 :
5 33 10
2 22 25
Output 1 :
Time 1: 5h 33m 10s
Time 2: 2h 22m 25s
Time difference: 3h 10m 45s
Input 2 :
20 20 10
13 20 50
Output 2 :
Time 1: 20h 20m 10s
Time 2: 13h 20m 50s
Time difference: 6h 59m 20s
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.

*/
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Constructor to initialize time
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Overloading the '-' operator to calculate time difference
    Time operator-(const Time& t) {
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diffInSeconds = totalSeconds1 - totalSeconds2;

        if (diffInSeconds < 0) {
            diffInSeconds = -diffInSeconds;  // Make difference positive if Time 2 is greater
        }

        int diffHours = diffInSeconds / 3600;
        diffInSeconds %= 3600;
        int diffMinutes = diffInSeconds / 60;
        int diffSeconds = diffInSeconds % 60;

        return Time(diffHours, diffMinutes, diffSeconds);
    }

    // Function to display time in the required format
    void display(const string& label) const {
        cout << label << ": " << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;

    // Input for Time 1
    cin >> h1 >> m1 >> s1;

    // Input for Time 2
    cin >> h2 >> m2 >> s2;

    // Creating objects for both times
    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);

    // Displaying Time 1 and Time 2
    time1.display("Time 1");
    time2.display("Time 2");

    // Calculating and displaying the time difference
    Time timeDiff = time1 - time2;
    timeDiff.display("Time difference");

    return 0;
}

