#include <iostream>
#include <sys/bsdtypes.h>
using namespace std;
int main()
{
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    date a,b;
    a.date=5;
    a.month=12;
    a.year=1999;

    b.date=19;
    b.month=1;
    b.year=2023;
    return 0;
}
