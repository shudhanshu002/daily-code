#include <iostream>
using namespace std;
int main(){
    char oper;
    cout<<"Enter an operator (+,-,*,/):";
    cin >>oper;
    float num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    switch (oper) {
        case '+':
            cout<< "num1" << "+" << "num2" <<"="<<num1+num2;
            break;
        case '-':
            cout<< "num1" <<"-"<< "num2" <<"="<<num1-num2;
            break;
        case '*':
            cout<< "num1"<<"*"<< "num2" <<"="<<num1*num2;
            break;
        case '/':
            cout<< "num1" <<"/"<<"num2"<<"="<<num1/num2;
            break;
        default:
            cout<<"Error!";
            break;
    }
    return 0;
}