#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three no. to compare:");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c)
        printf("a is largest: %d",a);
    else if(b > a && b > c)
        printf("b is largest: %d",b);
    else if(a==b && b>c)
        printf("a and b are equal and greatest");
    else if(a==b && b<c)
        printf("a and b are equal but less than c");
    else if(c==b && a<b)
        printf("c and b are equal and greatest");
    else if(c==b && a>b )
        printf("c and b are equal but less than a");
        else if(a==c && a>b)
        printf("a and c are equal and greatest");
    else if(a==c && a<b)
        printf("a and c are equal but less than b");
    else if (a==b && b==c)
        printf("All no are equal");
    else
        printf("c is largest: %d",c);
}
