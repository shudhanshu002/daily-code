#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> visited;

    bool dfs(vector<vector<int>> &adj,int src, int target) {
        if(src == target) return true;
        visited[src] = true;

        for(auto nei: adj[src]) {
            if(!visited[nei]) {
                if(dfs(adj,nei,target)) return true;
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        visited.resize(n,false);
        vector<vector<int>> adj(n);

        for(auto edge: edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return dfs(adj,source,destination);
    }
};