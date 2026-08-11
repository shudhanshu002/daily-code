#include <stdio.h>
int fac(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact =fact*i;
    }
    return fact;
    }
int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    int nfact=fac(n);
    int rfact=fac(r);
    int r1fact=fac(n-r);
    int d=nfact/(rfact*r1fact);
    printf("%d",d);
    }
