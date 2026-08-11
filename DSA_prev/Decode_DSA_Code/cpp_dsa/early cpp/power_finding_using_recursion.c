#include <stdio.h>
int powd(int x,int y){
        if(y==0)
            return 1;
        else if(y%2==0)
            return powd(x,y/2)*powd(x,y/2);
        else
            return powd(x,y/2)*powd(x,y/2)*x;
}
int main()
{
    printf("%d",powd(3,5));
}
