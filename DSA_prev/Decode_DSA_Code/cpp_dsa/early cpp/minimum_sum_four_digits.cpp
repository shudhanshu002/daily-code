#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    int n=2932;
    int ones=n%10;
    n/=10;
    int tens=n%10;
    n/=10;
    int hund=n%10;
    int thou=n/=10;
    vector<int> arr(4);
    arr[0]=ones;
    arr[1]=tens;
    arr[2]=hund;
    arr[3]=thou;
    sort(arr.begin(),arr.end());
    int new1=arr[0];
    int new2=arr[1];
    new1=new1*10+arr[2];
    new2=new2*10+arr[3];
    cout<<new1+new2;
}
