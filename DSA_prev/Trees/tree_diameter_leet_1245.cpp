#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int,int> bfs(int start, vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> dist(n, -1);
        queue<int> q;

        q.push(start);
        dist[start] = 0;

        int farNode = start;

        while(!q.empty()) {
            int u = q.front(); 
            q.pop();

            for(int v : adj[u]) {
                if(dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    q.push(v);

                    if(dist[v] > dist[farNode]) {
                        farNode = v;
                    }
                }
            }
        }

        return {farNode, dist[farNode]};
    }

    int treeDiameter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;

        vector<vector<int>> adj(n);

        for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        // Step 1: find one endpoint
        auto [A, _] = bfs(0, adj);

        // Step 2: find diameter
        auto [B, diameter] = bfs(A, adj);

        return diameter;
    }
};
