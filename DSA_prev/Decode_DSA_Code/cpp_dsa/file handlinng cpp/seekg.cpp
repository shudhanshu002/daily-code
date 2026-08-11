
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream fin;
    fin.open("sample2.txt");;
    if(!fin) cout<<"Error opening"<<endl;
    else cout<<"opened"<<endl;
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(0);   //--->what you want to be new position
    cout<<(char)fin.get();
    fin.seekg(2,ios_base::cur);
    cout<<fin.tellg()<<endl;
    fin.seekg(-38,ios_base::end);
    cout<<fin.tellg()<<endl;
}
