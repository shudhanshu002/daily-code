#include <iostream>
#include <cstring>
using namespace std;
union Customers
{
    char name[50];
    int account;
    int amount;
};
int main()
{
   /* int n;
    cin>>n;

    Customers customers[n];
    for(int i=0;i<n;i++){
        cin>>customers[i].name;
        cin>>customers[i].account;
        cin>>customers[i].amount;
        if(customers[i].amount>1000) cout<<customers[i].amount+100<<" ";
    }*/

    Customers sk;
    strcpy(sk.name,"sudha");
    cout<<sk.name;
   // sk.name="sudha";
    sk.account=2;
    cout<<sk.account;
    sk.amount=678;
   // cout<<sk.name<<" "<<sk.account<<" "<<sk.amount<<endl;

  //  incre(customers,n);
}
