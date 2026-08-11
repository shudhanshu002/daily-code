/*
hivakar is working on a program that involves processing numerical data. He needs to write a program that allows the user to input a set of numbers, stores them in an array, and then write the numbers to a file named "sample.dat". Additionally, the program should find the maximum and minimum values from the input numbers and display them on the console.

Input format :
The first line of the input consists of an integer N, representing the number of values to be entered.

The second line of input consists of N space-separated values.

Output format :
The output prints two space-separated integers representing the maximum and minimum values, respectively.



Refer to the sample output for the formatting specifications.

Code constraints :
2 ≤ N ≤ 100

Sample test cases :
Input 1 :
5
3 5 2 4 1
Output 1 :
5 1
Input 2 :
3
67 54 3
Output 2 :
67 3
Whitelist
Set 1:
ofstream
*/

#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++) {
        cin>>numbers[i];
    }

    ofstream fout("sample.dat");
    if(!fout) {
        cout<<"Cannot open the file."<<endl;
        return 1;
    }

    for(int i=0;i<n;i++) {
        fout<<numbers[i]<<" ";
    }
    fout.close();

    int maxNum = numeric_limits<int>::min();
    int minNum =numeric_limits<int>::max();

    for(int i=0;i<n;i++) {
        if(numbers[i]>maxNum) {
            maxNum=numbers[i];
        }
        if(numbers[i]<minNum) {
            minNum = numbers[i];
        }
    }
    cout<<maxNum<<" "<<minNum<<endl;
}
