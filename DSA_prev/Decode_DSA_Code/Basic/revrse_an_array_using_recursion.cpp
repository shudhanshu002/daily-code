#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void reverse(int arr[],int i,int j)
{
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverse(arr,i+1,j-1);
    return;
}

int main(){
    int arr[]= { 23,12,56,23,89,45,0,3};
    reverse(arr,0,7);
    for(int i=0;i<=7;i++) {
        cout<<arr[i]<<" ";
    }
}
