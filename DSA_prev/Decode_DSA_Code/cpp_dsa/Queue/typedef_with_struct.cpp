#include <iostream>
#include <string>
#include <cstring>
#include <sys/bsdtypes.h>
using namespace std;
int main()
{
   typedef struct book{
        char name[5];
        int noOfPages;
        float price;;
    }Book;
    s a;
    a.noOfPages=100;
    a.price=23.444;
//    a.name="sudhjs";
    a.name[0]='s';
    a.name[1]='s';
    a.name[2]='s';
    a.name[3]='s';

    cout<<a.noOfPages<<endl;
    cout<<a.price<<endl;
    cout<<a.name<<endl;
    strcpy(a.name,"sudhskjs");
    cout<<a.name;

}
