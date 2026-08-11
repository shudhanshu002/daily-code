#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[]="college wallah";
    char* ptr=str;
    int i=0;
    while(*ptr!='\0'){
        cout<<*ptr;
        ptr++;
        i++;
    }
	cout<<i<<endl;
}
