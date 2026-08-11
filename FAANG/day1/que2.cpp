// Given an integer array nums and integer k, find the contiguous subarray of length exactly k that has the maximum average value and return that average.
// Examples:
// Input:  nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75
// Explanation: [12,-5,-6,50] → sum=51 → 51/4 = 12.75

// Input:  nums = [5], k = 1
// Output: 5.0
// Constraints:

// 1 <= k <= n <= 10^5
// -10^4 <= nums[i] <= 10^4

#include <bits/stdc++.h>
using namespace std;

double func(vector<int> &nums, int k) {
    int n = nums.size();
    double maxAvg = INT_MIN;

    int i = 0, sum = 0;
    while(i < k) {
        sum += nums[i];
        i++;
    }

    maxAvg = sum / (k * 1.0);

    while(i < n) {
        sum += nums[i];
        sum -= nums[i-k];

        maxAvg = max(maxAvg, sum / (k * 1.0));
        i++;
    }

    return maxAvg;
}

int main() {
    vector<int> nums = {1,12,-5,-6,50,3};
    int k  = 4;
    cout<<func(nums, k);
}