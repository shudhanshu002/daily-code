#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // sliding window approch
    int atMost(vector<int> &nums, int k) {
        if(k<0) return 0;

        int i=0,sum=0,count=0;
        // treating as binary arr
        for(int j=0;j<nums.size();j++){
            if(nums[j] % 2 != 0) sum++;
            
            while(sum > k) {
                if(nums[i]%2 != 0) sum--;
                i++;
            }

            count += (j-i+1);
        }
        return count;
    }


    int numberOfSubarrays(vector<int>& nums, int k) {
        // unordered_map<int,int> mp;

        // int n = nums.size();
        // int count = 0;
        // int ans = 0;
        // for(int i=0;i<n;i++) {
        //     if(nums[i] % 2 != 0) count++;
        //     if(count == k) ans += 1;
        //     int rem = count - k;
        //     if(mp.find(rem) != mp.end()) ans += mp[rem];
        //     mp[count]++;
        // }
        // return ans;

        int result = atMost(nums,k) - atMost(nums,k-1);
        return result;
    }
};