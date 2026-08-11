#include <stdio.h>
#include <string.h>
struct date{
int d,m,y;
};
int main(){
//struct date d1={28,9,2002},d2;
struct date d1;
scanf("%da%da%d",&d1.d,&d1.m,&d1.y);
printf("%d-%d-%d",d1.d,d1.m,d1.y);

}
