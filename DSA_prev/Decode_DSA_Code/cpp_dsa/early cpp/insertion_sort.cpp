#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={5,4,6,73,1};
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
                if(arr[j]>arr[j-1]) break;
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

