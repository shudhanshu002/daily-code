#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> parent, rank, sz;
    vector<vector<int>> dir{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int n,m;

    int find(int x){
        if(parent[x] != x) return parent[x] = find(parent[x]);
        return x;
    }

    int unite(int x,int y) {
        x = find(x);
        y = find(y);

        if(x == y) return sz[x];

        if(rank[x] > rank[y]) {
            parent[y] = x;
            sz[x] += sz[y];
            return sz[x];
        } else if(rank[x] < rank[y]) {
            parent[x] = y;
            sz[y] += sz[x];
            return sz[y];
        } else {
            parent[y] = x;
            sz[x] += sz[y];
            rank[x]++;
            return sz[x];
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int total = n*m;
        parent.resize(total);
        sz.assign(total, 0);
        rank.assign(total, 0);

        for(int i =0;i<total;i++) parent[i] = i;

        auto id = [&](int r,int c) {
            return r * m + c;
        };

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1) sz[id(i,j)] = 1;
            }
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 0) continue;

                for(int d=0;d<4;d++){
                    int ni = i + dir[d][0];
                    int nj = j + dir[d][1];

                    if (ni >= 0 && nj >= 0 && ni < n && nj < m && grid[ni][nj] == 1) {
                        unite(id(i, j), id(ni, nj));
                    }
                }
            }
        }

        for (int i = 0; i < total; i++) {
            if (parent[i] == i)
                ans = max(ans, sz[i]);
        }

        return ans;
    }
};