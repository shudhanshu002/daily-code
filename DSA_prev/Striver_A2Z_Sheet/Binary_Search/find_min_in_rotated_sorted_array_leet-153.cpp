#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo=0;
        int hi = nums.size()-1;

        while(lo<=hi) {
            int mid = lo + (hi-lo)/2;

            if(nums[mid] == target) return true;

            if(nums[mid] == nums[lo] && nums[mid] == nums[hi]) {
                lo++;
                hi--;
            }

            else if(nums[mid] >= nums[lo]) {
                if(target < nums[mid] && target >= nums[lo]) hi = mid-1;
                else lo = mid+1;
            } else {
                if(target > nums[mid] && target <= nums[hi]) lo = mid+1;
                else hi = mid-1;
            }
        }
        return false;
    }
};