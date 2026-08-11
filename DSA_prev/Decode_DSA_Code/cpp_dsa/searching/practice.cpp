
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

void printsubsets(string ans,string ori)
{
    if(ori==""){
        cout<<ans<<endl;
        return;

    }
    char ch=ori[0];
    printsubsets(ans,ori.substr(1));
    printsubsets(ans+ch,ori.substr(1));
}
/*void removeachar(string s,string ori)
{
    if(ori.lenght()==0){
        cout<<s;
    }
    char ch =ori[0];
    if(ch=='a') removeachar(s,ori.substr(1));
    else removeachar(s+ch,ori.length(1));
}*/
int maze(int er,int ec)
{
    if(er<0 || ec<0) return 0;
    if(er==0 || ec==1) return 1;
    int rightways=maze(er,ec-1);
    int downways=maze(er-1,ec);
    return rightways+downways;
}
int check(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return check(n-1)+check(n-2);
}

int main()
{
    string s;
    s="ans";

    cout << printsubsets("",s);
}
