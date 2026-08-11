#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <bitset>
using namespace std;
int max_power(int n)
{

    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;
}

int flip_every_bit(int n)
{
    int temp=n;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return temp^n;
}


int main()
{
    cout<<max_power(34)<<"\n";
    cout<<flip_every_bit(5);
}
