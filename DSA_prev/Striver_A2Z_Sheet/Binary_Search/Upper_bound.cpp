// Given a sorted array arr[] and a number target, find the upper bound of the target in this given array. The upper bound of a number is defined as the smallest index in the sorted array where the element is greater than the given number.


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0, hi = n - 1;
        int idx = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] > target) {  
                idx = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return idx == -1 ? n : idx;
    }
};

