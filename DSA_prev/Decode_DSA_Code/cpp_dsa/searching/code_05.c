//peak mountain code
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int find_peak(int arr[],int n)
{
    int lo=1;
    int hi=n-2;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            return mid;
        else if(arr[mid]>arr[mid+1]) hi=mid-1;
        else lo=mid-1;
    }
}
