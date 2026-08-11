#include <iostream>
#include <vector>
using namespace std;

vector<int> maxProductSubarray(vector<int> &nums) {
    int n=nums.size();
    int maxPro=nums[0],minPro=nums[0],result=nums[0];
    int start=0,end=0,tempStart=0;

    for(int i=1;i<n;i++){
        if(nums[i]<0)
            swap(maxPro,minPro);
        if(nums[i]>nums[i]*maxPro) {
            maxPro=nums[i];
            tempStart=i;
        } else maxPro=nums[i]*maxPro;

        minPro = min(nums[i],nums[i]*minPro);

        if(maxPro>result){
            result=maxPro;
            start=tempStart;
            end=i;
        }
    }
    return {start,end,result};
}
