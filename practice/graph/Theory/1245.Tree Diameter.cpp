#include <bits/stdc++.h>
using namespace std;

// Best Approach: Double DFS/BFS

// A fundamental property of trees:

// If you start from any node and find the farthest node A, then A is guaranteed to be one endpoint of the diameter.

// Then:

// Start DFS/BFS from any node (say 0)
// Find farthest node A
// Start DFS/BFS from A
// Find farthest node B
// Distance A → B = Diameter

class Solution {
public:
    int treeDiameter(vector<vector<int>> edges) {
        int n = edges.size() + 1;

        unordered_map<int, vector<int>> adj;
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        return findDiameter(n, adj);
    }

private:
    int findDiameter(int n,unordered_map<int, vector<int>>& adj){
        auto [farthestNode, _] = findFarthestNode(n, adj, 0);

        auto [_, diameter] = findFarthestNode(n, adj, farthestNode);
        return diameter;
    }

    // BFS helper
    pair<int,int> findFarthestNode(int n, unordered_map<int, vector<int>>& adj, int sourceNode) {
        queue<int> q;
        vector<bool> visited(n,false);

        q.push(sourceNode);
        visited[sourceNode] = true;

        int maxdistance = 0;
        int farthestNode = sourceNode;

        while(!q.empty()) {
            int sz = q.size();

            while(sz--) {
                int curr = q.front();
                q.pop();

                farthestNode = curr;

                for(int nei: adj[curr]) {
                    if(!visited[nei]) {
                        visited[nei] = true;
                        q.push(nei);
                    }
                }
            }
            if(!q.empty()) maxdistance++;
        }
        return {farthestNode, maxdistance};
    }
};