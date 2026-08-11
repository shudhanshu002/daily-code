#include <stdio.h>
int main(){
int x,y,max,min,rem;
scanf("%d %d",&x,&y);
if(x>y){
    max=x;
    min= y;
}
else if(x<y){
    max=y;
    min=x;
}
while(max%min !=0){
    rem=max%min;
    max=min;
    min=rem;
}
printf("%d",min);
}
