#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<list<int>> graph;
    int v;

    void dfs(int i,vector<bool> &vis, int &node) {
        vis[i] = true;
        node++;

        for(auto nei:graph[i]) {
            if(!vis[nei]) dfs(nei, vis, node);
        }
    }

    long long countPairs(int n, vector<vector<int>>& edges) {
        graph.resize(n);
        v = n;

        for(int i = 0; i < edges.size(); i++){
            int a = edges[i][0];
            int b = edges[i][1];

            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        vector<bool> vis(n, false);
        vector<int> nodes;

        for(int i=0;i<n;i++){
            if(!vis[i]) {
                int node = 0;
                dfs(i,vis,node);
                nodes.push_back(node);
            }
        }

        long long re = 0;
        long long remaining = n;

        for(auto c:nodes) {
            remaining -= c;
            re += (long long)c * remaining;
        }

        return re;
    }
};