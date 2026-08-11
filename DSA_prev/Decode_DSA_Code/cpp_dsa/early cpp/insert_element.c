#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int size,num,pos;
    printf("enter size of array: ");
    scanf("%d ",&size);
    printf("Enter elements in array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d",&num);
    printf("Enter index at which to insert: ");
    scanf("%d",&pos);
      if(pos>size || pos<1){
        printf("Enter index is invalid");

      }
      else{
        for(int i=size;i>=pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=num;
        size++;
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);

        }
      }
    }
