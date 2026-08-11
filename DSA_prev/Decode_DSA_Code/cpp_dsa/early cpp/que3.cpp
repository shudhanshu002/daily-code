
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your salary and year of working"<<endl;
    float salary;
    int year;
    cin>>salary>>year;
    if(year>5){
        cout<<"your new salary is"<<(salary*0.05)+salary<<endl;

    }else{
        cout<<"no increment"<<salary<<endl;
    }
    return 0;
}
