#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> re;
    void dfs(int node, vector<vector<int>>& graph, vector<int>& path, int n) {
        if (node == n) {
            path.push_back(n);
            re.push_back(path);
            path.pop_back();
            return;
        }

        path.push_back(node);
        for (auto next : graph[node]) {
            dfs(next, graph, path, n);
        }
        path.pop_back();
    }

    // [[1,3,3],[2,3,3]]
    // Expected
    // [[0,1,3],[0,2,3]]

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size() - 1;
        vector<int> path;
        dfs(0, graph, path, n);
        return re;
    }
};
