#include <stdio.h>
#include <limits.h>
void incre(int arr[]){
    for(int i=0;i<sizeof(arr);i++){
        arr[i]+=1;
    }
    return ;
    }
/*int main(){
    int arr[]={10,-10,22,4,5,67,89,-23,0};
    int max=INT_MIN;
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    }*/
    int main(){

    int arr[]={10,-10,22,4,5,67,89,-23,0};
    incre(arr);

    for(int i=0;i<9;i++){
       printf("%d ",arr[i]);
    }

    }
