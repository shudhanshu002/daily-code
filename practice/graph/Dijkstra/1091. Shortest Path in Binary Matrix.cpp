#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<int, pair<int,int>> P;

    vector<pair<int,int>> dir = {
        {1,0},{0,1},{-1,0},{0,-1},
        {1,1},{1,-1},{-1,-1},{-1,1}
    };

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        vector<vector<int>> result(
            n,
            vector<int>(n, INT_MAX)
        );

        priority_queue<P, vector<P>, greater<P>> pq;

        result[0][0] = 1;

        pq.push({1, {0,0}});

        while(!pq.empty()) {
            auto [d,cell] = pq.top();
            pq.pop();

            int x = cell.first;
            int y = cell.second;

            if(d > result[x][y]) continue;

            if(x == n-1 && y == n-1) return d;

            for(auto [dx,dy]:dir) {
                int nx = x + dx;
                int ny = y + dy;

                if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny] == 0) {
                    if(d + 1 < result[nx][ny]) {
                        result[nx][ny] = d+1;
                        pq.push({d+1, {nx,ny}});
                    }
                }
            }
        }

        return -1;
    }
};