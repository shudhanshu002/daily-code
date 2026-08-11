#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={5,4,6,73,1};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int min=76;
        int temp;
        for(int j=i;j<n;j++){
            if(arr[j]<min) {
                min=arr[j];
                 temp=j;
            }
        }
        swap(arr[i],arr[temp]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
