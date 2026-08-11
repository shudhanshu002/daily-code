#include <stdio.h>
int main(){
    int a=10;
    int b=a++;
    printf("a=%d,b=%d",a++,b);
    printf("\na=%d",++a);
    int c=10;

    printf("%d",(c++) + (++c));
    int var_123=23;
    return 0;

}
