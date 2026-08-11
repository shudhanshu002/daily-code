#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int ans = 0;

        unordered_map<int, int> mp;

        for(int j=0;j<n;j++) {
            mp[nums[j]]++;

            if(mp.size() > 2){
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};