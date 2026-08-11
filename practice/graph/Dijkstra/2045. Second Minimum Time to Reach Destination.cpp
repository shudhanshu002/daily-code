#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        // one cleaver approach is to use BFS beacause each edge has same weight
        // ** BFS ** --> O(V + E)
        vector<vector<int>> adj(n+1);

        for(auto &e:edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> dist1(n+1, INT_MAX), dist2(n+1, INT_MAX);

        queue<pair<int,int>> q; //  node , time;
        dist1[1] = 0;
        q.push({1, 0});

        while(!q.empty()) {
            auto [node, d] = q.front();
            q.pop();

            for(int nei: adj[node]) {
                if(d+1 < dist1[nei]) {
                    dist2[nei] = dist1[nei];
                    dist1[nei] = d+1;
                    q.push({nei, d+1});
                } else if(d+1 > dist1[nei] && d+1 < dist2[nei]) {
                    dist2[nei] = d+1;
                    q.push({nei, d+1});
                }
            }
        }

        int steps = dist2[n];
        int currTime = 0;
        for(int i=0;i<steps;i++) {
            if((currTime/change) % 2 == 1) {
                currTime = (currTime / change + 1)*change;
            }
            currTime += time;
        }
        return currTime;
    }
};