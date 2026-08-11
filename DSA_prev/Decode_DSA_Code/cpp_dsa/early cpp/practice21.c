#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n+3;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<n+3;i++){
        printf("%d",arr[i]);
    }
}
