
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream fout;
    char ch;
    fout.open("sample2.txt",ios::app);
    if(!fout) cout<<"Not opening";
    else cout<<"succesful";
    cout<<endl;
    int pos;
    pos = fout.tellp();
    cout<<pos<<endl;
    fout<<"mysirg";
    pos = fout.tellp();
    cout<<pos<<endl;
    fout.close();

}
