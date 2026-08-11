#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/factorial(r)*factorial(n-r);
    return ncr;
}
int main(){
    int c=combination(6,3);
    scanf("%d",c);
    }
