#include <stdio.h>
void swap(int ,int);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before fun call a =%d and b= %d",a,b);
    swap(a,b);
    printf("After fun call a =%d and b= %d",a,b);
    }
    void swap(int x,int y)
    {

        int temp=x;
        x=y;
        y=temp;

    }
