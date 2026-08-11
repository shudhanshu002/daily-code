#include <iostream>
#include <sys/bsdtypes.h>
using namespace std;
typedef int* int_pointer;
int main()
{
    int x=5;
    int y=6;
    int_pointer a=&x,b=&y;

    cout<<a<<endl<<&x<<endl<<*a;
}
