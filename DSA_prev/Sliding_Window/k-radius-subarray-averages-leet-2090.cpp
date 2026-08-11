#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);
        if(n < (k*2 + 1)) return ans;

        vector<long long> temp(n);
        temp[0] = nums[0];
        for(int i=1;i<n;i++) temp[i] = temp[i-1] + nums[i];

        for(int j=k;j<n-k;j++) {
            int right = j+k;
            int left = j-k-1;

            long long sum = temp[right];
            if(left != -1) sum -= temp[left];

            int x = k*2 + 1;
            ans[j] = sum/x; 
        }
        return ans;
    }
};