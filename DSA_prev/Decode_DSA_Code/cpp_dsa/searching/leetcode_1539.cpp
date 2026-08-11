#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int kthmissing(int arr[],int n,int k)
{
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k) lo=mid+1;

        else hi=mid-1;

    }
    return lo+k;
}
