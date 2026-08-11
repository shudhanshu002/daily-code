#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int tempXor = 0;

        for(auto num: nums) {
            tempXor ^= num;
        }

        int i = 0;
        int copyXor = tempXor;

        while(copyXor) {
            if((copyXor & 1) == 1) break;
            i++;
            copyXor >>= 1;
        }


        int part1=0, part2=0;

        for(auto num: nums) {
            if(num & (1<<i)) part1 ^= num;
            else part2 ^= num;
        }

        return {part1, part2};
    }
};