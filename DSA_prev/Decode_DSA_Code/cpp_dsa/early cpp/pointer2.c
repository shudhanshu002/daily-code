/*#include <stdio.h>
int main(){
int var[]={10,100,200};
int i,*ptr;
ptr=var;
for(int i=0;i<3;i++){
    printf("Address of var[%d] =%d\n",i,ptr);
     printf("value of var[%d] =%d\n",i,*ptr);
     ptr++;
}
}*/
#include <stdio.h>
int main()
{

    int i,n;
    int a[10],*parr=a;
    printf("\n ENter the number of elements:");
    scanf("%d",&n);
    printf("\n Eneter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",parr+i);
    }
    printf("\n Enetred array elements are:");
    for(i=0;i<n;i++){
        printf("%d",*(parr+i));
    }
}
