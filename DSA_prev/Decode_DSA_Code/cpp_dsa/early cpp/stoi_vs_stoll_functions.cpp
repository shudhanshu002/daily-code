#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string str="1234567890";
    int x=stoi(str);
    long long y=stoll(str);
    cout<<x+1<<endl<<y;

}
