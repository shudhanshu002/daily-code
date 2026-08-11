#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;

        if(k <= 0) return false;

        for(int i=0;i<nums.size() && i<k;i++) {
            if(st.count(nums[i])) return true;
            st.insert(nums[i]);
        }

        int i = 0;
        for(int j=k;j<nums.size(); j++) {
            if(st.count(nums[j])) return true;
            st.erase(nums[i++]);
            st.insert(nums[j]);
        }

        return false;
    }
};