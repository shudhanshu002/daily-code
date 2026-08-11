#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canplace(vector<int> &stalls, int cows, int gap) {
        int count = 1;
        int last = stalls[0];
        
        for(int i = 1;i<stalls.size();i++) {
            if(stalls[i] - last >= gap) {
                count++;
                last = stalls[i];
            }
            if(count >= cows) return true;
        }
        
        return false;
    }
  
  
    int aggressiveCows(vector<int> &stalls, int cows) {
        sort(stalls.begin(), stalls.end());
        
        int lo = 1;
        int hi = stalls.back() - stalls.front();
        int ans = 0;
        
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            
            if(canplace(stalls, cows, mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        return ans;
    }
};