#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream fout;
    fout.open("sample2.txt",ios::ate | ios::app);;
    if(!fout) cout<<"Error opening"<<endl;
    else cout<<"opened"<<endl;
    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp()<<endl;
    fout.close();

}

