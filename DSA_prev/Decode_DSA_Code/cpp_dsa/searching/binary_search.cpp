#include <iostream>
#include <algorithm>
#include <vectors>
#include <climits>
#include <sstream>

int binary_search(vector<int> &v,int n)
{

    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-1lo)/2;
        if(arr[mid]==n) return mid;
        else if(arr[mid]>n)
            hi=mid-1;
        else lo=mid+1;
    }
}
