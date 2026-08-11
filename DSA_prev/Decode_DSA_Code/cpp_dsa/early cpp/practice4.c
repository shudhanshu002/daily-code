#include <stdio.h>
int main()
{
    int arr[]={10,-10,22,4,5,67,89,-23,0};
    for(int i=0;i<9;i++){
        for(int j=i;j<9;j++){
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
}
