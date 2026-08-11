#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
//leet code 2529
int maximumAndMinimum(vector<int> &arr)
{
    int pos=0,neg =0;
    int n=arr.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(arr[mid]<=0) lo=mid+1;
        else{
            if(arr[mid-1]>0 &&mid>0) hi=mid-1;
            else{
                pos=n-mid;
                break;
            }
        }
    }
}
