#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2) q.push({i,j});
                else if(grid[i][j] == 1) fresh++;
            }
        }

        if(fresh == 0) return 0;

        int steps = 0;

        while(!q.empty()) {
            int sz = q.size();

            for(int i=0;i<sz;i++) {
                auto cell = q.front();
                q.pop();

                for(auto [x,y]:dir) {
                    int nr = cell.first + x;
                    int nc = cell.second + y;

                    if(nr >=0 && nr < n && nc >=0 && nc < m && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr,nc});
                    }
                }
            }
            steps++;
        }

        return fresh == 0 ?  steps-1 :  -1;
    }
};