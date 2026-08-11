#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int> &bloom,int m,int k,int days) {
        int count = 0, bq = 0;
        for(int num: bloom) {
            if(num <= days) {
                count++;
                if(count == k) {
                    bq++;
                    count = 0;
                }
            } else count = 0;

            if(bq >= m) return true;
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlower = (long long)m*k;

        if(bloomDay.size() < totalFlower) return -1;

        int lo = *min_element(bloomDay.begin(), bloomDay.end());
        int hi = *max_element(bloomDay.begin(), bloomDay.end());
        int res = -1;

        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if(check(bloomDay, m, k, mid)) {
                res = mid;
                hi = mid-1;
            } else lo = mid + 1;
        }

        return res;
    }
};