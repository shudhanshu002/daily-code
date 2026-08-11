#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str="sudhanshhu is studying in lovely professional university";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}
