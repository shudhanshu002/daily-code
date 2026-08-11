#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
//given n string conssisting if digits from 0 to 9 .Return the index of string which has maximum value
{

    string arr[]={"0123","0023","456","00182","940","0002901"};
    int max=stoi(arr[0]);
    for(int i=0;i<=5;i++){
        int x=stoi(arr[i]);
        if(max<x) max=x;
    }
    cout<<max;
}
