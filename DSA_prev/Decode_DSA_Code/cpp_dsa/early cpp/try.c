#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    do{
        int j=n%10;
        sum +=j*j;
        n=n/10;}
        while(n!=0);

    printf("%d",sum);
    }
