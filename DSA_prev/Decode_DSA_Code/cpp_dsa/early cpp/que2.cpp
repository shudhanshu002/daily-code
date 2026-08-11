#include <iostream>
using namespace std;
int main(){
    char grade;
    cin>>grade;
    switch(grade){
    case 'F':
        cout<<"grade is Below 25"<<endl;
        break;
    case 'E':
        cout<<"grade is bet 25 to 45"<<endl;
        break;
    case 'D':
        cout<<"grade is bet 45 to 50"<<endl;
        break;
    case 'C':
        cout<<"grade is bet 50 to 60"<<endl;
        break;
    case 'B':
        cout<<"grade is bet 60 to 80"<<endl;
        break;
    case 'A':
        cout<<"grade is Above 80"<<endl;
        break;
    default:
        cout<<"fail"<<endl;
        break;

    }

return 0;
}
