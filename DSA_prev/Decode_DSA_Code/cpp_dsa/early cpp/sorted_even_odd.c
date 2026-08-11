#include <stdio.h>
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
void arrangeEvenodd(int arr[],int size){
int left=0,right=size-1;

while(left<right){
    while(arr[left]%2==0 && left<right){
        left++;
    }
    while(arr[right]%2!=0 && left<right){
        right--;
    }
    if(left<right){
        swap(&arr[left],&arr[right]);
        left++;
        right--;
    }
}
}
int main() {
    int arr[] = {12, 3, 5, 8, 9, 2, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    arrangeEvenodd(arr, size);

    printf("Arranged array (Even first, Odd later): ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

