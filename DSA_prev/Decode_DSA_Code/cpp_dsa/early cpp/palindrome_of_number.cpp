#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int real=n;
    while(n>0){
        int temp=n%10;
        sum=(sum*10)+temp;
        temp=0;
        n/=10;
    }
    cout<<sum<<"\n";
   if(real==sum){
    cout<<"Yess";
   }
   else cout<<"No";
}
