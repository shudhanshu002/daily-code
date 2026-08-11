// 🔴 Problem: Minimum Size Subarray Sum
// Given an array of positive integers nums and a positive integer target, return the minimum length of a subarray whose sum is ≥ target. If no such subarray, return 0.
// Input:  nums = [2,3,1,2,4,3], target = 7
// Output: 2
// Explanation: [4,3] → sum=7, length=2

// Input:  nums = [1,4,4], target = 4
// Output: 1

// Input:  nums = [1,1,1,1,1], target = 11
// Output: 0
// Constraints:

// 1 <= nums.length <= 10^5
// 1 <= nums[i] <= 10^4
// 1 <= target <= 10^9

#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &nums, int target) {
    int n = nums.size();

    int sum = 0;
    int len = INT_MAX;

    int left = 0;

    for(int i = 0; i < n; i++) {
        sum += nums[i];

        while(sum >= target) {
            sum -= nums[left];
            len = min(len, i - left + 1);
            left++;
        }
    }

    return len;
}

int main() {
    vector<int> nums = {2,3,1,2,4,3};
    cout<<func(nums, 4);
}