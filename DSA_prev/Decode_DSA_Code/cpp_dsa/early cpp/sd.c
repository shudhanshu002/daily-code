#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("Grade :O");
    }
    else if(marks<=89 && marks>=84){
        printf("Grade :A+");
    }
    else if(marks<=84 && marks>=75){
         printf("Grade :A");
        }
    else if(marks<=74 && marks>=65){
         printf("Grade :B");
    }
    else if(marks<=64 && marks>=50){
         printf("Grade :C");
    }
    else{
         printf("Grade :F");
    }
}
