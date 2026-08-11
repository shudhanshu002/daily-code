
#include <stdio.h>
int main()
{
    int arr[3][3]={{1,2,6},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                int temp=arr[i][j];
                arr[i][j]=arr[i][3-i-1];
                arr[i][3-i-1]=temp;
            }
        }
    }
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            printf("%d ", arr[row][col]);
        }

        printf("\n");
    }
}
