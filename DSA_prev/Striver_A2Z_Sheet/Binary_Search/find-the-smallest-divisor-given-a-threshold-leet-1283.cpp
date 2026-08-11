#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool check(vector<int>& nums, int divisor, int threshold) {
        int sum = 0;
        for (int num : nums) {
            sum += ceil((double)num / divisor);
            if (sum > threshold) return false; 
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo=1,hi=*max_element(nums.begin(), nums.end());
        int ans=hi;
        while(lo<=hi) {
            int mid=lo+(hi-lo)/2;
            if(check(nums,mid,threshold)){
                ans=mid;
                hi=mid-1;
            } else lo=mid+1;
        }
        return ans;
    }
};