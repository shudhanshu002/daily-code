// Day 4 — Q1 🎯 Binary Search (Medium)
// 🔴 Problem: Find Minimum in Rotated Sorted Array
// A sorted array was rotated at some pivot. Find the minimum element.
// Input:  nums = [3,4,5,1,2]
// Output: 1

// Input:  nums = [4,5,6,7,0,1,2]
// Output: 0

// Input:  nums = [11,13,15,17]
// Output: 11
// Constraints:

// 1 <= nums.length <= 5000
// -5000 <= nums[i] <= 5000
// All integers are unique
// Must solve in O(log n)

#include <bits/stdc++.h>
using namespace std;

int func1(vector<int>& nums) {
    int lo = 0, hi = nums.size() - 1;

    while(lo < hi) {  // note: lo < hi not lo <= hi
        int mid = lo + (hi - lo) / 2;

        if(nums[mid] > nums[hi])
            lo = mid + 1;  // min is in right half
        else
            hi = mid;      // mid could be the answer
    }

    return nums[lo];  // lo == hi == minimum index
}

int func(vector<int> &nums, int target) {
    int n = nums.size();

    int lo = 0, hi = n-1;

    while(lo <= hi) {
        int mid = lo + (hi - lo)/2;

        if(nums[mid] == target) return mid;

        if(nums[lo] < nums[mid]) {
            if(target < nums[mid] && nums[lo] <= target) {
                hi = mid-1;
            } else {
                lo = mid + 1;
            }
        } else {
            if(target > nums[mid] && nums[hi] >= target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> ans = {11,13,15,17};
    cout<< func1(ans);
}