#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector <int> &nums ) {
    int maxSum = nums[0];
    int curr = 0;
    for(int i=0;i<nums.size();i++) {
        curr += nums[i];
        maxSum = max(maxSum, curr);
        if(curr < 0) curr = 0;
    }

    return maxSum;
}