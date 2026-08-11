#include <stdio.h>
void rotateLeft(int arr[],int size,int position){
for(int i=0;i<position;i++){
   int temp=arr[0];
    for(int j=0;j<size-1;j++){
        arr[j]=arr[j+1];

    }
    arr[size-1]=temp;
}
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positions = 2; // Number of positions to rotate left

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    rotateLeft(arr, size, positions);

    printf("Array after rotating %d positions left: ", positions);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
