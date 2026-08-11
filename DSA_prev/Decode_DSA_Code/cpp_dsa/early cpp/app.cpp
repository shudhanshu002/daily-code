#include <iostream>
using namespace std;
int main(){
    bool asd;
    cin>>asd;
    switch (asd)
    {
    case ('True'):
        cout<<"Enter no."<<endl;
        break;
    case ('False'):
        cout<<"Enter nothing"<<endl;
        break;
    
    default:
        cout<<"Busy"<<endl;
        break;
        
    }
    return 0;
}