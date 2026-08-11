#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=nums[0],minpro=nums[0];
        int ans = nums[0];

        for(int i=1;i<nums.size();i++){
            int temp = maxpro;
            maxpro = max({nums[i],maxpro*nums[i],minpro*nums[i]});
            minpro = min({nums[i],temp*nums[i],minpro*nums[i]});
            ans = max(ans,maxpro);
        }
        return ans;
    }
};