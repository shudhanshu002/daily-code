#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int maze(int row,int col)
{
    if(row==1  || col==1) return 1;
    if(row==0  ||  col==0) return 0;
    int left=maze(row,col-1);
    int up=maze(row-1,col);
    return left+up;
}


int main()
{
    cout<<maze(3,3);
}
