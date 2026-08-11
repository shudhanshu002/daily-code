#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin;
    char ch;
    fin.open("sample2.txt");
    if(!fin) cout<<"Not opening";
    else cout<<"succesful";
    int pos;
    pos = fin.tellg();
    cout<<endl;
    cout<<pos<<endl;
    fin>>ch;
    cout<<ch<<endl;
    pos = fin.tellg();
    cout<<pos<<endl;
    fin>>ch;
    cout<<ch<<endl;
}
