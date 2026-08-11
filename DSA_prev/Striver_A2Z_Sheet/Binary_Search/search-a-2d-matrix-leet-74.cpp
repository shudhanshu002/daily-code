#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0,hi=n-1;
        while(lo<=hi) {
            int mid =lo +(hi-lo)/2;
            if(matrix[mid][0]<=target && matrix[mid][m-1]>=target) {
                int low=0,high=m-1;
                while(low<=high){
                    int midd=low + (high-low)/2;
                    if(matrix[mid][midd]==target) return true;
                    else if(matrix[mid][midd]>target) high=midd-1;
                    else low = midd+1;
                }
                break;
            } else if(matrix[mid][m-1]<target) lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};