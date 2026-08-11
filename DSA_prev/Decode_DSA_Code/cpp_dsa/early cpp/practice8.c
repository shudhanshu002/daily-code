#include <stdio.h>
#include <stdlib.h>
void calculateaverage(int rows,int cols,double (*arr)[cols],double average[])
{

    for(int i=0;i<rows;i++){
        double sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        average[i]=sum/cols;
    }
}
void display(int rows,double average[])
{

    printf("Average of each rows:\n");
    for(int i=0;i<rows;i++){
        printf("Row %d: %.2f\n",i+1,average[i]);
    }
}

int main()
{
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    double (*arr)[cols]=malloc(rows*sizeof(*arr));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    double average[rows];
    calculateaverage(rows,cols,arr,average);
    display(rows,average);
}
