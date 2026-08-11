#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int swaps = 0;

        int k = 0;
        for (auto x : nums)
            if (x == 1) k++;
        
        if (k <= 1 ) return 0;

        for (int i = 0; i < k; i++)
            if (nums[i] == 0) swaps++;

        int minSwaps = swaps;

        int i = 0;
        for (int j = k; j < n + k; j++) {
            if (nums[j % n] == 0) swaps++;
            if (nums[i % n] == 0) swaps--;
            i++;

            minSwaps = std::min(minSwaps, swaps);
        }

        return minSwaps;
    }
};
