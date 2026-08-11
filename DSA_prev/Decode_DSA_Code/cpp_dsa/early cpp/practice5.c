#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[]={10,-10,22,4,5,67,89,-23,0};
    int max=INT_MIN,smax=0;
    for(int i=0;i<9;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    }
    printf("maximum element = %d\nsecond maximum element =%d",max,smax);
}
