#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <sstream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,5,7,9,10};
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}
