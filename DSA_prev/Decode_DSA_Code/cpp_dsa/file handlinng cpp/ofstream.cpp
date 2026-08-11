#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    //fout.open("sample1.txt",ios::app|ios::binary);  -->binary mode me open hoo jayega
    fout.open("sample1.txt",ios::app);  //-->text mode me open hoga

    if (fout.is_open()) {
        cout << "File opened successfully." << endl;
    } else {
        cout << "Error opening file." << endl;
    }

    fout.close();
}
