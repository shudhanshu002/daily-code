#include <stdio.h>
void calcii(int a,intb){
    printf("Addition : %d",a+b);
    printf("Multiplication : %d",a*b);
    printf("subtraction : %d",a-b);
    printf("division : %d",a/b);
    printf("Modulus : %d",a%b);
    return -1;
    }
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    calci(a,b);
    return 0;
    }
