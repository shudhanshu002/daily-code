#include <stdio.h>
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a=2;
    int b=90;
    swap(&a,&b);
    printf("a= %d and b=%d ",a,b);

}
