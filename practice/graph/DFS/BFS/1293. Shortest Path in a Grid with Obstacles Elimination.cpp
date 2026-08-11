#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n,m;
    vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};

    int shortestPath(vector<vector<int>>& grid, int k) {
        n = grid.size();
        m = grid[0].size();

        bool visited[41][41][1601];
        memset(visited, false, sizeof(visited));

        queue<vector<int>> q;
        q.push({0,0,k});
        visited[0][0][k] = true;

        int steps = 0;
        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                auto temp = q.front();
                q.pop();
                int r = temp[0];
                int c = temp[1];
                int rem = temp[2];

                if(r == n-1 && c == m-1) return steps;

                for(auto [x,y]:dir) {
                    int nr = r + x;
                    int nc = c + y;
                    if(nr<0 || nc<0 || nr>=n || nc>=m) continue;

                    if(grid[nr][nc] == 0 && !visited[nr][nc][rem]) {
                        visited[nr][nc][rem] = true;
                        q.push({nr,nc,rem});
                    } else if(grid[nr][nc] == 1 && rem > 0 && !visited[nr][nc][rem-1]) {
                        visited[nr][nc][rem-1] = true;
                        q.push({nr,nc, rem-1});
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};