// You are given a 2D grid rooms where:

// -1 represents a wall or an obstacle.

// 0 represents a gate.

// INF (2³¹ - 1) represents an empty room.

// Fill each empty room with the number of steps to the nearest gate. If it is impossible to reach a gate, leave it as INF.


#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void wallsAndGates(vector<vector<int>> &rooms) {
            if(rooms.empty() || rooms[0].empty()) return;

            int m = rooms.size();
            int n = rooms[0].size();
            queue<pair<int,int>> q;
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(rooms[i][j] == 0) q.push({i,j});
                }
            }

            vector<pair<int,int>> dir ={ {1,0} , {0,1} , {-1,0}, {0,-1}};
            while(!q.empty()) {
                auto [x,y] = q.front();
                q.pop();

                for(auto [dx,dy] : dir) {
                    int nx = x+dx;
                    int ny = y+dy;

                    if(nx>=0 && ny>=0 &&nx<m && ny<n && rooms[nx][ny] == INT_MAX) {
                        rooms[nx][ny] = rooms[x][y] + 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
};