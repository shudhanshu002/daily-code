
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
void printSubsets(string ans,string original)
{
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];

    printSubsets(ans,original.substr(1));
     printSubsets(ans+ch,original.substr(1));
}

int main()
{
    string str="abc";
    printSubsets("",str);
}
