#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int> &arr,int st,int end) {
        while(st<end) {
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;

        for(int i=n-1;i>0;i--) {
            int mn = INT_MAX;
            int idx = -1;

            if(nums[i] > nums[i-1]) {
                flag = true;
                for(int j = i;j<n;j++) {
                    if(nums[j]<=mn && nums[j] > nums[i-1]) {
                        mn = nums[j];
                        idx = j;
                    }
                }

                swap(nums[i-1], nums[idx]);
                reverse(nums, i, n-1);
                return;
            }
        }   

        if(!flag) {
            reverse(nums, 0 , n-1);
            return;
        }
    }
};