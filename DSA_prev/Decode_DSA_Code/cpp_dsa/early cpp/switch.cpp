#include <iostream>
using namespace std;
int main(){
    char day=0;
    cin>>day;
switch(day){
    case 'M':
        cout<<"Monday"<<endl;
        break;
    case 'T':
        cout<<"Tuesday"<<endl;
        break;
    case 'W':
        cout<<"wednesday"<<endl;
        break;
    case 'Th':
        cout<<"Thursday"<<endl;
        break;
    case 'F':
        cout<<"Friday"<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;

}
    return 0;
}
