#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
public:
    int id;
    Employee(int id=0):id(id) {}
    void saveToFile(const string& file) {
        ofstream fout(file,ios::binary);
        if(fout.is_open()) {
            fout.write(reinterpret_cast<char*>(&id),sizeof(id));
            fout.close();
        } else  {
            cout<<"Unable to setup."<<endl;
            exit(1);
        }
    }
};

int main()
{
    int id;
    cin>>id;
    Employee emp(id);

    const string file="employee.bin";
    emp.saveToFile(file);
    ifstream fout(file,ios::binary | ios::ate);
    if(fout.is_open()) {
        streampos size =fout.tellg();
        fout.close();
        cout<<"Size is: "<<size<<" Bytes"<<endl;
    } else
    {
        cout<<"Unable to setup."<<endl;
    }
}
