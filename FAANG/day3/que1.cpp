// Given an integer array nums, return all triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, j != k, and nums[i] + nums[j] + nums[k] == 0.
// The solution set must not contain duplicate triplets.
// Input:  nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]

// Input:  nums = [0,0,0,0]
// Output: [[0,0,0]]

// Input:  nums = [1,2,-2,-1]
// Output: []

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> func(vector<int> &nums) {
    int n = nums.size();

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n - 2; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0) {
                ans.push_back({nums[i], nums[left], nums[right]});

                while(left < right && nums[left] == nums[left+1]) left++;
                while(left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if( sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = func(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout<< ans[i][0]<<" "<<ans[i][1]<< " "<<ans[i][2]<<endl;
    }
}