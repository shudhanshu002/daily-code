#include <stdio.h>
int main()
{
    int arr[4][3]={{1,2,6},{4,5,6},{7,8,9},{2,5,6}};
    for(int i=0;i<4;i++){
            int sum=0,c=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            c+=arr[j][i];
        }
    printf("Sum of row %d elements is: %d\n",(i+1),sum);
    printf("Sum of column %d elements is: %d\n",(i+1),c);
    sum=0;
    c=0;
    }
}
