#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &nums){
    int n = nums.size();
    int count = 0;
    int minSwap = 0;

    int k = 0;

    for(auto x:nums) if(x == 1) k++;

    for(int i=0;i<k;i++) if(nums[i] == 0) count++;

    minSwap = count;

    int i=0;
    for(int j=k;j<n;j++) {
        if(nums[j] == 0) count++;
        if(nums[i++]==0) count--;

        minSwap = min(minSwap, count);
    }

    return minSwap;
}