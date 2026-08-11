#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canAllocate(vector<int> &arr,int mid,int partition) {
        int sum = 0, count = 1;
        
        for(int i=0;i<arr.size();i++) {
            if(sum + arr[i] > mid) {
                count++;
                sum = arr[i];
                
                if(count > partition) return false;
            } else sum += arr[i];
        }
        
        return true; 
    }
  
  
    int findPages(vector<int> &arr, int k) {
        
        if(k > arr.size()) return -1;
        // code here
        int lo = *max_element(arr.begin(), arr.end());
        int hi = accumulate(arr.begin(), arr.end(), 0);
        
        int ans = hi;
        
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            
            if(canAllocate(arr,mid,k)) {
                ans = mid;
                hi = mid-1;
            } else lo = mid+1;
        }
        return ans;
    }
    
    
};