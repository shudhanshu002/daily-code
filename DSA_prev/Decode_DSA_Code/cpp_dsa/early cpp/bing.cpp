#include <iostream>
using namespace std;
int main(){
    int password, WIN;
    string name;
    cout<<"Please enter your full name: "<<endl;
    getline(cin,name);
    cout <<name<<"Enter your password:"<<endl;
    cin>>password;
    if (password==WIN){
        cout<<"correct"<<endl;
    }
    else{
        cout<<"incorrect"<<endl;
    }
    return 0;
}