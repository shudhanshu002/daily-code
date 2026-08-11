// 💡 Key Intuition (Very Important)

// If a mother vertex exists, then:

// It must be the last finished node in a full DFS traversal

// Why?

// During DFS:

// A node that can reach many nodes finishes late
// A node that cannot reach much finishes early

// So the last DFS finished node becomes a candidate mother vertex.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(int node, vector<int> adj[], vector<bool> &vis) {
        vis[node] = true;

        for(int nei : adj[node]) {
            if(!vis[nei]) {
                dfs(nei, adj, vis);
            }
        }
    }

    int findMotherVertex(int V, vector<int> adj[]) {

        vector<bool> vis(V, false);
        int candidate = 0;

        // Step 1: Find last finished node
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, adj, vis);
                candidate = i;
            }
        }

        // Step 2: Verify candidate
        fill(vis.begin(), vis.end(), false);
        dfs(candidate, adj, vis);

        for(bool v : vis) {
            if(!v) return -1;
        }

        return candidate;
    }
};