#include <iostream>
using namespace std;
int pow(int p,int q)
{
    if(q==0) return 1;
    return p*pow(p,q-1);
}
int main()
{

    int p,q;
    cin>>p>>q;
    cout<<pow(p,q);
}

