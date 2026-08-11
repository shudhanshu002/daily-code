#include <stdio.h>
int series(int n)
{
    if(n==0)
        return 0;
    if(n%2==0){
        return series(n-1)-n;

    }
    else{
        return series(n-1)+n;
    }
}


void printmultiples(int n,int k)
{

    if(k==0)
        return;
    printmultiples(n,k-1);
    printf("%d  ",n*k);
}
int main(){
    printf("%d",series(5*2));
       }
