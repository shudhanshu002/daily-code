#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int atMost(vector<int> &nums,int k){
        unordered_map<int,int> mp;
        int i=0,j=0;
        int n= nums.size();
        int count = 0;

        while(j < n) {
            mp[nums[j]]++;

            while(mp.size() > k) {
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);

                i++;
            }

            count += j-i+1;
            j++;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums, k-1);
    }
};