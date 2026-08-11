
#include  <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n>0){
        int temp=n%10;
        n/=10;
        sum+=temp;
        temp=0;
    }
    cout<<if(sum==n);
}
