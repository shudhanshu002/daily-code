#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>
#include <climits>
#include <string>
using namespace std;

bool sumSquare(int n)
{
    int
}
bool isPerfect(int n)
{
    int root=sqrt(n);
    if(root*root==n) return true;
    return false;
}
bool findyes(int c)
{

    int x=0;
    int y=c;
    while(x<=y){
        if(isPerfect(x) && isPerfect(y)) return true;
        x++;
        y--;
    }
    return false;
}
int main()
{
    cout<<findyes(53);
}


