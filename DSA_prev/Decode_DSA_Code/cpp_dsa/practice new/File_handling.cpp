#include <iostream>
using namespace std;
int main()
{
    FILE* ptr =fopen("sk.txt","r");
    char str[123];
    while(fgets(str,123,ptr)!=NULL){
        cout<<str;
    }
}
