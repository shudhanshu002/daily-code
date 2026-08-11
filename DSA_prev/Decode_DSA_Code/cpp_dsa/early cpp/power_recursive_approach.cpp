#include <iostream>
using namespace std;
int pow(int p,int q)
{
    if(q==0) return 1;
    else if(q%2==0) return pow(p,q/2)*pow(p,q/2);
    else return p*pow(p,q/2)*pow(p,q/2);
}
int main()
{

    int p,q;
    cin>>p>>q;
    cout<<pow(p,q);
}

