
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
vector<int> findclosest(vector<int> &arr,int k,int k)
{
    int n=arr.size();
    vector<int> v(k);
    if(x<arr[0]){
        for(int i=0;i<k;i++){
            v[i]=arr[i];
        }
        return ans;
    }

    if(x>nums[n-1]){
        int i=n-1;
        int j=k-1;
        while(j>=0){
            ans[j--]=arr[i--];
        }
        return ans;
    }
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int t=0;
    int mid=-1;
    //binary search
    while(lo<=hi){

        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            ans[t]=arr[mid];
            t++;
            break;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    int lb=hi;
    int ub=lo;
    if(flag==true){
        lb=mid-1;
        ub=mid+1;
    }
    while(t<k && lb>=0 && ub<=n-1){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[up]);
        if(d1<=d2){
            ans[t++]=arr[lb--];
        }
        else{
            ans[t++]=arr[up++];
        }
    }
    if(lb<0){
        while(t<k){
            ans[t++]=arr[up++];
        }
    }
    if(up>n-1){
        while(t<k){
            ans[t++]=arr[lb--];
        }
    }
    sort(ans.begin(),ans.end());
    return ans;

}
