#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;
int bin_to_deci(string &bin)
{
    int n=bin.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch =bin[i];
        int num=ch-'0';
        result+= num*(1<<(n-i-1));
    }
    return result;
}

string deci_to_bin(int num)
{
    string result="";
    while(num>0){
        if(num%2==0){
            result="0"+result;
        }
        else {
            result="1"+result;
        }
    }
    return result;
}

int count_set_bit(int n)
{
    int count=0;
    while(n>0){
        count++;
        n=n&(n-1);
    }
    return count;
}


int main()
{
    string bin="10110101";
    cout<<bin_to_deci(bin)<<endl;
    int k= __builtin_popcount(181);
    cout<<k<<endl;
    int setbit=count_set_bit(181);
    cout<<setbit<<endl;

}
