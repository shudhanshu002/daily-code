#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int ans = -1;
        int n = mat.size();
        
        for(int i=0;i<n;i++) {
            bool flag = false;
            for(int j=0;j<n;j++) {
                if(i != j && mat[i][j] == 1) {
                    flag = true;
                }
            }
            if(flag == false) {
                
                for(int j=0;j<n;j++) {
                    if(i!=j && mat[j][i] != 1) {
                        flag = true;
                        break;
                    }
                }
                
                if(flag == false) return i;
            }
        }
        
        return ans;
    }
};