#include <iostream>
using namespace std;
int main()
{
    char arr[]="This is the best youtube channel ot cpp";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
    cout<<endl;
    cout<<sizeof(arr);
}
