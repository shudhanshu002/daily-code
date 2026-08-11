#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

    void dfs(vector<vector<char>>& grid,int sr,int sc) {
        int rows=grid.size();
        int cols=grid[0].size();

        if(sr < 0 || sr>=rows || sc<0 || sc>=cols || grid[sr][sc] == '0') return;
        grid[sr][sc] = '0';
        for(int i=0;i<4;i++){
            int nr = sr + dir[i][0];
            int nc = sc + dir[i][1];
            dfs(grid, nr, nc);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        int cc=0;
        for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                if(grid[r][c]=='1') {
                    cc++;
                    dfs(grid,r,c);
                }
            }
        }
        return cc;
    }
};