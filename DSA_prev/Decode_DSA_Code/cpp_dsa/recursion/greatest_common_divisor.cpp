#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int hcf1(int a,int b)
{
    if(a==0) return b;
    else return hcf1(b%a,a);
}
int hcf(int a,int b)
{
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int main()
{
    int a=24;
    int b=60;
    cout<<hcf(a,b);
}
