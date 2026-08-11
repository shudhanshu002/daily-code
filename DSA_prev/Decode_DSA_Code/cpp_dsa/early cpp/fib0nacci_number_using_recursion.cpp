#include <iostream>
using namespace std;
int fib(int n)
{

    return fib(n-1)+fib(n-2);
    if(n==0 or n==1) return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}
