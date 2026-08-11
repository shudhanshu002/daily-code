#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int toWays(vector<int> &nums, int k) {
        int n = nums.size();
        int count = 0;
        int len = 0;
        int j = 0;

        while(j < n) {
            if(nums[j] <= k) {
                len++;
                count += len;
            } else {
                len = 0;
            }
            j++;
        }
        return count;
    }

    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return toWays(nums,right) - toWays(nums, left-1);
    }
};