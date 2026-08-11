// You are using GCC
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,d,k=1;

    while(n!=0){
        sum=0;
        while(n!=0){
            d=n%10;
            sum+=d;
            n=n/10;


        }if(sum>9){
            n=sum;
            sum=0;
            ++k;
        }

    }printf("Digital Root: %d\n",sum);
    printf("Number of steps: %d",k);

}
