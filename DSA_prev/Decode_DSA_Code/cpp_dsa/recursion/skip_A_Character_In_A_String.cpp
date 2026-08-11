#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
void remove_Char(string ans,string original)
{
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='a') remove_Char(ans,original.substr(1));
    else remove_Char(ans+ch,original.substr(1));
}

int main()
{
    string t="ultimate danger";
    string ty;
    remove_Char(ty,t);
}
