#include <stdio.h>
int main()
{
    int a=5;
    int* x=&a;
    *x =7;
    int** y=&x;
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    printf("%d\n",**y);

}
