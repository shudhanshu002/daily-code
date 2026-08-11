#include <stdio.h>
void decToBin(int n){
    int bin[32];
    int i=0;
    while(n>0){
        bin[i]=n%2;
        n=n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }}
    int main(){
    int n=3;
    decToBin(n);
    return 0;}

