
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
void hanoi(int n,char a,char b,char c)
{
    if(n==0) return;
    int st=0;

    hanoi(n-1,a,c,b);

    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main()
{
    int n=4;
    hanoi(n,'A','B','C');
}
