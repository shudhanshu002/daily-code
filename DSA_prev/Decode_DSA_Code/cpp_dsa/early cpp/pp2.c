
#include <stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",k);
            k+=2;
        }
        k=1;
        printf("\n");
    }
}
