#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> pre(n,0);
        pre[0] = nums[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + nums[i];
        }

        for(int i=0;i<queries.size();i++){
            int maxLen = 0;
            int lo = 0, hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(pre[mid] > queries[i]) hi = mid - 1;
                else {
                    maxLen = mid + 1;
                    lo = mid + 1;
                }
            }
            queries[i] = maxLen;
        }
        return queries;
    }
};