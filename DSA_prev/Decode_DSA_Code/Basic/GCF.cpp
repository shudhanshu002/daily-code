#include <iostream>
using namespace std;


int findHCF(int a,int b){
    while(b!=0){
        int temp = b;
        b =a%b;
        a= temp;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF of " << num1 << " and " << num2 << " is: " << findHCF(num1, num2) << endl;

    return 0;
}
