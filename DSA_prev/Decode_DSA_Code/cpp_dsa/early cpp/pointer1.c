#include <stdio.h>
int main(){
    int arr[100],freq[100];
    int size,count;
    printf("Enter size of array");
    scanf("%d",&size);
    printf("Enter array elements");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;

    }
    for(int i=0;i<size;i++){
        count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<size;i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",arr[i],freq[i]);
        }
    }
}
