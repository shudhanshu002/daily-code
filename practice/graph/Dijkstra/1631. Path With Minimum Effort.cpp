#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<int,pair<int,int>> P;
    vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};

    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> result(n, vector<int> (m,INT_MAX));

        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0,{0,0}}); // effort ,cell

        while(!pq.empty()) {
            int currEffort = pq.top().first;
            auto [x,y] = pq.top().second;
            cout<<x<<" "<<y<<" "<<currEffort<<endl;
            pq.pop();

            if(currEffort > result[x][y]) continue;

            if(x == n-1 && y == m-1)
                return currEffort;

            //
            cout<<"push section"<<endl;
            for(auto [r,c]:dir) {
                int nr = x + r;
                int nc = y + c;

                if(nr >=0 && nr < n && nc >=0 && nc < m) {
                    int diff = abs(heights[x][y] - heights[nr][nc]);
                    int effort = max(currEffort, diff);
                    if(effort < result[nr][nc]) {
                        result[nr][nc] = effort;
                        pq.push({effort,{nr, nc}});
                        cout<<nr<<" "<< nc<< " "<<effort<<endl;
                    }
                }
            }
            //
            cout<<"end"<<endl<<endl;
        }

        return -1;
    }
};