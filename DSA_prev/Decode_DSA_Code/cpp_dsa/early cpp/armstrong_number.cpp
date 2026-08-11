#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int n,int d)
{
    if(n==0) return 0;
    return pow(n%10,d)+armstrong(n/10,d);
}
int main()
{

    int n;
    cin>>n;
    int no_of_digits=0;
    int temp=n;
    while(temp>0){
        temp/=10;
        no_of_digits++;
    }
    int result=armstrong(n,no_of_digits);
    if(result==n){
        cout<<"Yes armstrong number";

    }
    else cout<<"Not a armstrong number";
}
