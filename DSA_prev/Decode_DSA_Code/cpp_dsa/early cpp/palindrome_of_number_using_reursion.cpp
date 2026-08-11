#include <iostream>
using namespace std;
bool fun(int num,int *temp)
{
    if(num>=0 and num<=9){
            int lastdigitoftemp=(*temp)%10;
    (*temp)/=10;
        return (num==lastdigitoftemp);
    }
    bool result=(fun(num/10,temp)and (num%10)==((*temp)%10));
    (*temp)/=10;
    return result;
}
int main()
{
    int num=12621;
    int anotherNum=num;
    int *temp=&anotherNum;
    cout<<fun(num,temp);

}
