#include <stdio.h>

int main(){

    int num1,num2;
    char d;
    scanf("%d %d %c",&num1,&num2,&d);

    switch (d){
    case '+':
        printf("%d",num1+num2);
        break;
    case '-':
        printf("%d",num1-num2);
        break;
    case '*':
        printf("%d",num1*num2);
        break;
    default:
        printf("Invalid");
        break;
        }
    }
