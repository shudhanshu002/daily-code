#include <stdio.h>
int fac(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
    }

    int combination(int n,int r){
    int ncr=fac(n)/fac(r)*fac(n-r);
    return ncr;
    }

    void sum(){
    int num1,num2,add;
    printf("Enter values of num1 and num2 :");
    scanf("%d %d",&num1,&num2);
    add=num1+num2;
    printf("%d",add);
          }
int main(){
   sum();
    }
