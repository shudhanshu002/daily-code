#include <stdio.h>
int main(){
    int d;
    d=22;
    float b;
    char c;
    printf("Memory taken by int=%d",sizeof(int));
    printf("\nMemory taken by float =%d",sizeof(float));
    printf("\nMemory taken by char =%d",sizeof(char));
    short int a;
    printf("\nSize =%d\n",sizeof(a));
    scanf("%d",&a);
    printf("a=%d",a);
}
