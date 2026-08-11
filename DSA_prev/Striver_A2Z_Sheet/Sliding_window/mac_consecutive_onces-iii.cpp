#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;          // left
        int zeros = 0;
        int mxlen = 0;

        for (int j = 0; j < n; j++) {   // right
            if (nums[j] == 0)
                zeros++;

            // shrink window until valid
            while (zeros > k) {
                if (nums[i] == 0)
                    zeros--;
                i++;
            }

            mxlen = max(mxlen, j - i + 1);
        }

        return mxlen;
    }
};
