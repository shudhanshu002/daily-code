#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *array=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    void *ptr=array;
    for(int i=0;i<n;i++){
        printf("%d ",*((int *)ptr+i));
    }
}
