#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = n-1;
        while(low <= high) {
            int mid = low + (high - low)/2;

            int col = 0;
            for(int j=0;j<m;j++) {
                if(mat[mid][j] > mat[mid][col]) col = j;
            }

            int up = (mid > 0) ? mat[mid - 1][col] : -1;
            int down = (mid < n - 1) ? mat[mid + 1][col] : -1;

            if(mat[mid][col] > up && mat[mid][col] > down) return {mid, col};
            else if(down > mat[mid][col]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {-1,-1};
    }
};