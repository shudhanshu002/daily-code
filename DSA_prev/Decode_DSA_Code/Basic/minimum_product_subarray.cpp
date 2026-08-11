#include <iostream>
#include <vector>
using namespace std;

vector<int> minProductSubarray(vector<int> &nums){
    int n=nums.size();
    int maxPro=nums[0],minPro=nums[0],result=nums[0];
    int start=0,end=0,tempStart=0;

    for(int i=1;i<n;i++){
        if(nums[i]<0) swap(maxPro,minPro);

        if(nums[i]<nums[i]*minPro){
            minPro=nums[i];
            tempStart=i
        } else minPro=nums[i]*minPro;

        maxPro=max(nums[i],nums[i]*maxPro);
        if (minProd < result) {
            result = minProd;
            start = tempStart;
            end = i;
        }
    }
    return {start,end,result};
}
