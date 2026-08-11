#include <stdio.h>
#include <math.h>

int sum(int k);
int main(){
    int result=sum(10);
    printf("%d\n",result);
    printf("%f\n",sqrt(16));
    printf("%f\n",ceil(1.4));
    printf("%f\n",floor(1.4));
    return 0;
    }
int sum(int k){
    if (k>0){
        return k + sum(k-1);

    }else{
    return 0;}



    }
