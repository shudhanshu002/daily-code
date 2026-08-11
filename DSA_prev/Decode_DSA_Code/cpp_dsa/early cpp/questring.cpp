//input a string and return the number of times the neighbouring characters different from each other

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    int n=s.length();
    if(n!=1){
    for(int i=0;i<n;i++)
    {

        if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
    }}
    cout<<count;
}
