#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int maxPos = -1;
        int minPos = -1;
        int breaker = -1;

        long long ans = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < minK || nums[i] > maxK) breaker = i;

            if(nums[i] == minK) minPos = i;
            if(nums[i] == maxK) maxPos = i;
            long long count = min(minPos, maxPos) - breaker;
            ans += count > 0 ? count : 0;
        }

        return ans;
    }
};