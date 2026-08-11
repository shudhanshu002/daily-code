
#include <stdio.h>
int main()
{
    int arr[3][3]={{1,2,6},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){

                sum+=arr[i][3-1-i];
            }


    printf("%d ",sum);
}
