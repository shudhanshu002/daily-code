#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        int xr = 0;
        long count = 0;

        mp[0] = 1;  // base case

        for (int i = 0; i < arr.size(); i++) {
            xr ^= arr[i];

            if (mp.find(xr ^ k) != mp.end())
                count += mp[xr ^ k];

            mp[xr]++;
        }

        return count;
    }
};
