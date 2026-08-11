#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;
void printsubset(string ans,string ori)
{
    if(ori=="") {
        cout<<ans<<endl;
        return;
    }
    char ch=ori[0];
    printsubset(ans,ori.substr(1));
    printsubset(ans+ch,ori.substr(1));
}

int main()
{
    printsubset("","abc");
}
