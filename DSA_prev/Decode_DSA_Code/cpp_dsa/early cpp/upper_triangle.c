#include <stdio.h>
int main()
{int upper=0;
    int arr[3][3]={{1,2,6},{0,5,6},{0,0,9}};
    for(int i=1;i<3;i++){
           // int upper=0;
        for(int j=0;j<i;j++){
                if(arr[i][j]==0){
                    upper=1;
                }

        }
    }if(upper ==1){
    printf("Upper trangular");}
}
