#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int maxInArray(int arr[],int n,int idx)
{
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main()
{
    int arr[]={4,5,6,767,8,9};
    cout<<maxInArray(arr,6,0);
}
