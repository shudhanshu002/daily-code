#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
bool ispalindeome(string s,int i,int j)
{
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return ispalindeome(s,i+1,j-1);
}
int main()
{
    string s="abcdcba";
    cout<<ispalindeome(s,0,s.length()-1);
}
