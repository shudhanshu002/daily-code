#include<stdio.h>
int swap(int ,int );
int main()
{   int a=34,b=89;
    swap(a,b);

}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %d and b=%d ",a,b);
    return -1;

}
