#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0, sum = 0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            if(sum == k) ans++;
            int rem = sum -k;
            if(mp.find(rem) != mp.end()) ans += mp[rem];
            mp[sum]++;
        }

        return ans;
    }
};