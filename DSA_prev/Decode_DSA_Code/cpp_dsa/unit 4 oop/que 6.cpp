/*
You are a teacher and want to calculate the grade for a student based on their obtained marks. You have a grading system that assigns grades based on the percentage of marks obtained out of the total marks. You need to develop a program that takes the obtained marks as input, calculates the grade, and displays the marks and grade.



Write a program that takes the obtained marks as input and calculates the percentage based on the given marks and a total mark value. Using the percentage, determine the grade according to the following criteria:



Percentage >= 90: Grade A+

Percentage >= 80: Grade A

Percentage >= 70: Grade B

Percentage >= 60: Grade C

Percentage >= 50: Grade D

Percentage < 50: Grade F



The program should create a Grade object with the obtained marks and the determined grade. It should then convert the Grade object to two basic types: an int for the marks and a string for the grade: int marks = studentGrade; . Finally, the program should display the marks and grades.



Company Tags: Wipro

Input format :
The input contains an integer value representing the obtained marks.

Output format :
The first line will display the marks in the format: "Marks: <marks>".

The second line will display the grade in the format: "Grade: <grade>".



Refer to the sample output for format specifications.

Code constraints :
1 ≤ marks ≤ 500

The obtained marks should not exceed the total marks (500 in this case).

Total mark = 500

Sample test cases :
Input 1 :
490
Output 1 :
Marks: 490
Grade: A+
Input 2 :
420
Output 2 :
Marks: 420
Grade: A
Input 3 :
380
Output 3 :
Marks: 380
Grade: B
Input 4 :
300
Output 4 :
Marks: 300
Grade: C
Input 5 :
280
Output 5 :
Marks: 280
Grade: D
Input 6 :
200
Output 6 :
Marks: 200
Grade: F
*/

#include <iostream>
#include <string>
using namespace std;

// Grade Class Definition
class Grade {
private:
    int marks;         // Obtained marks
    string grade;      // Corresponding grade

public:
    // Constructor to initialize marks and determine grade
    Grade(int obtainedMarks) : marks(obtainedMarks) {
        double percentage = (static_cast<double>(marks) / 500.0) * 100.0;

        if (percentage >= 90.0) {
            grade = "A+";
        }
        else if (percentage >= 80.0) {
            grade = "A";
        }
        else if (percentage >= 70.0) {
            grade = "B";
        }
        else if (percentage >= 60.0) {
            grade = "C";
        }
        else if (percentage >= 50.0) {
            grade = "D";
        }
        else {
            grade = "F";
        }
    }

    // Conversion operator to convert Grade object to int (marks)
    operator int() const {
        return marks;
    }

    // Conversion operator to convert Grade object to string (grade)
    operator string() const {
        return grade;
    }
};

int main() {
    int obtainedMarks;

    // Read the obtained marks from the user
    cin >> obtainedMarks;

    // Create a Grade object using the obtained marks
    Grade studentGrade(obtainedMarks);

    // Convert the Grade object to int and string using the conversion operators
    int marks = studentGrade;       // Implicitly calls operator int()
    string grade = studentGrade;    // Implicitly calls operator string()

    // Display the marks and grade in the specified format
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

