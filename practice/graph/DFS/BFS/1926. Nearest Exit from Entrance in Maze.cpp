#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char>>& grid, vector<int>& entrance) {
        int n = grid.size();
        int m = grid[0].size();

        int si = entrance[0], sj = entrance[1];

        queue<pair<int,int>> q;
        q.push({si, sj});
        grid[si][sj] = '+';

        vector<pair<int,int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        int steps = 0;

        while(!q.empty()) {
            int sz = q.size();

            while(sz--) {
                auto [i, j] = q.front();
                q.pop();

                // check exit (must NOT be entrance)
                if((i == 0 || i == n-1 || j == 0 || j == m-1) &&
                   !(i == si && j == sj)) {
                    return steps;
                }

                for(auto [x, y] : dir) {
                    int nr = i + x;
                    int nc = j + y;

                    if(nr < 0 || nr >= n || nc < 0 || nc >= m)
                        continue;

                    if(grid[nr][nc] == '+')
                        continue;

                    grid[nr][nc] = '+';
                    q.push({nr, nc});
                }
            }

            steps++;
        }

        return -1;
    }
};