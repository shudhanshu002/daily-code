
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    string input;
    cin>>input;
    ofstream fout("sample.txt");
    if(fout) {
        fout<<"Time is a Great Teacher But unforhttij";
        fout.close();
    }
    else {
        cout<<"Unable to set up"<<endl;
        return 1;
    }
cout<<"fjfbjb";
    ofstream fout_app("sample.txt",ios::app");
    if(fout_app) {
        fout_app<<" "<input;
        cout<<"Data appended succesfully"<<Endl;
        fout_app.close();
    }
    else {
        cout<<"jhbdjswbbswkb";
        return 1;
    }

    ifstream fin("sample.txt");
    if(fin) {
        string word;
        while(fin>>word) {
            cout<<word<<" ";
        }
        fin.close();
    }
}
