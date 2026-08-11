// Given an integer array nums and integer k, return the length of the longest subarray whose sum is less than or equal to k.
// Examples:
// Input:  nums = [3,1,2,1,1], k = 5
// Output: 4
// Explanation: [1,2,1,1] → sum=5 ≤ 5, length=4

// Input:  nums = [1,2,3,4,5], k = 6
// Output: 3
// Explanation: [1,2,3] → sum=6 ≤ 6, length=3

// Input:  nums = [5,1,2,3], k = 4
// Output: 2
// Explanation: [1,2] or [2,3] → length 2 (not [5] alone since we want longest)

#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &nums,int k) {
    int n = nums.size();

    int sum = 0;
    int i = 0;

    int left = 0;
    int len = 0;

    while( i < n) {
        sum += nums[i];

        while(sum > k) {
            sum -= nums[left];
            left++;
        }
        len = max(len, i - left + 1);
        i++;
    }

    return len;
}

int main() {
    vector<int> nums = {5,1,2,3};
    int k  = 4;
    cout<<func(nums, k);
}