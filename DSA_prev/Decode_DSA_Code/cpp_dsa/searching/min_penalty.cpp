
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
void minpenalty(string s)
{
    int n=s.length()+1;
    int p[n];
    int su[n];
    int op[n];
    int add=0;
    p[0]=0;
    for(int i=0;i<n-1;i++){
        p[i+1]=p[i]+((s[i]=='N') ? 1:0);
    }
    su[n]=0;
    for(int i=n-2;i>=0;i--){
        su[i]=su[i+1] + ((s[i+1]=='Y') ? 1:0);
    }

    for(int i=0;i<=s.length();i++){
        op[i]=p[i]+su[i];

    }
    for(int i=0;i<=s.length();i++){
        cout<<op[i]<<"  ";
    }

}
int main()
{
    string s="YYNY";
    minpenalty(s);
}
