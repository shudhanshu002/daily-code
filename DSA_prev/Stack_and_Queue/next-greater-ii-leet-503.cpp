#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        stack<int> st;
        vector<int> ans(n, -1);

        for(int i=n+(n-1)-1 ; i>=0; i--) {
            while(st.size() && st.top() <= nums[i%n]) st.pop();

            if(st.size()) ans[i%n] = st.top();

            st.push(nums[i%n]);
        }

        return ans;
    }
};