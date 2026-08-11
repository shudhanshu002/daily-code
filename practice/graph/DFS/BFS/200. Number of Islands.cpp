#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
    int n,m;

    void dfs(vector<vector<char>>& grid,int sr,int sc){
        if(sr<0 || sc<0 || sr>=n || sc>=m || grid[sr][sc] != '1') return;
        grid[sr][sc] = 'X';
        for(auto [dx,dy]:dir){
            int nr = sr + dx;
            int nc = sc + dy;
            dfs(grid,nr,nc);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1') {
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};