#include <stdio.h>
int main(){
    int n1,n2,x,y,z;
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        x=n2;
        y=n1;

    }else{
    x=n1;
    y=n2;}

    for(int i=1;i<=x;i++){

        if(x%i==0 && y%i==0){
            z=i;
        }
    }printf("HCF: %d",z);
    printf("LCM %d",(n1*n2)/z);
    }
