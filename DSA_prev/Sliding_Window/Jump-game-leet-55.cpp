#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++) {
            if(nums[i]==0 && ans<=i) {
                break;
            }
            int k=nums[i]+i;
            ans =max(ans,k);

        }
        return ans>=nums.size()-1;
    }
};