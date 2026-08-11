#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer:");
    int i=0,j=1,k=2,m;
    m=i++||j++&&k++;
    printf("%d %d %d %d",m,i,j,k);
    int t=10;
    t=!t>14;
    printf('t=%d',t);

    }
