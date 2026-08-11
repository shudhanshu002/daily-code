#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> v;
        int rowst = 0, rowend = r-1, colst = 0, colend = c-1;

        while(rowst <= rowend && colst <= colend) {

            // left --- right
            for(int i =colst;i<=colend;i++){
                v.push_back(matrix[rowst][i]);
            }
            rowst++;
            if(rowst>rowend ||colst>colend) break;

            // top --- down
            for(int i=rowst;i<=rowend;i++){
                v.push_back(matrix[i][colend]);
            }
            colend--;
            if(rowst>rowend ||colst>colend) break;

            // right --- left
            for(int i=colend;i>=colst;i--){
                v.push_back(matrix[rowend][i]);
            }
            rowend--;
            if(rowst>rowend ||colst>colend) break;

            // down --- top
            for(int i=rowend;i>=rowst;i--){
                v.push_back(matrix[i][colst]);
            }
            colst++;
            if(rowst>rowend ||colst>colend) break;
        } 
        return v;
    }
};