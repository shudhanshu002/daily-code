
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age );
    if(age<18){
        printf("you can't vote");

    }else if(age>=18&& age<56){
    printf("Hey boy");}else{printf("chutiya");}

    return 0;
}
