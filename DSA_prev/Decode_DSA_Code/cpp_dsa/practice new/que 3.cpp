/*
You are given a program that saves an employee object to a binary file and calculates the size of the file. The employee object contains an ID. You need to modify the program to correctly calculate the size of the file.



The input shall be an integer. The output should be given as specified in the sample output, where the size might vary based on the input data. If the setup code fails, then print "Unable to setup."

Input format :
The input consists of an integer eid representing the employee ID.

Output format :
The output displays the size of the file in bytes.

Code constraints :
The employee ID (eid) is a non-negative integer.

The file size should be reported in bytes.

Sample test cases :
Input 1 :
10
Output 1 :
size is: 4 bytes.
*/

#include <iostream>
#include <fstream>

using namespace std;

class Employee {
    public:
    int id;
    Employee(int id=0) :id(id) {}

    void saveToFile(const string& filename){
        ofstream file(filename,ios::binary);
        if(file.is_open()){
            file.write(reinterpret_cast<char*>(&id),sizeof(id));
            file.close();
        } else {
            cout<<"Unable to setup."<<endl;
            exit(1);
        }
    }
};


int main(){
    int eid;
    cin>>eid;
    Employee emp(eid);

    const string filename="employee.bin";
    emp.saveToFile(filename);
    ifstream file(filename,ios::binary | ios::ate);
    if(file.is_open()){
        streampos size =file.tellg();
        file.close();
        cout<<"size is: "<<size<<" bytes."<<endl;
    } else {
        cout<<"Unable to setup."<<endl;
    }
    return 0;
}
