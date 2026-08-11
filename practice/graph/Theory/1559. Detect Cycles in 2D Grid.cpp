#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int row , col;
    vector<vector<bool>> visited;
    vector<pair<int,int>> dir = {{0,1}, {1,0}, {-1,0}, {0,-1}};

    bool dfs(int x,int y,int px,int py,vector<vector<char>>& grid,char ch) {
        visited[x][y] = true;

        for(auto [dx,dy]: dir) {
            int nr = x+dx;
            int nc = y+dy;

            if(nr>=0 && nc>=0 && nr<row && nc<col && grid[nr][nc] == ch) {
                if(nr==px && nc==py) continue;
                if(visited[nr][nc]) return true;
                if(dfs(nr,nc,x,y,grid,ch)) return true;
            }
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        row = n;
        col = m;

        visited.resize(n,vector<bool> (m,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j]) {
                    if(dfs(i,j,-1,-1,grid,grid[i][j])) return true;
                }
            }
        }

        return false;
    }
};