#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef long long LL;

    void DFS(int u,unordered_map<int, vector<int>> &adj,unordered_set<int> &visited) {
        if(visited.count(u)) return;
        visited.insert(u);

        for(auto nei:adj[u]) {
            DFS(nei,adj,visited);
        }

        return;
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();

        unordered_map<int, vector<int>> adj;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                if(i == j) continue;

                int x1 = bombs[i][0];
                int y1 = bombs[i][1];
                int r1 = bombs[i][2];

                int x2 = bombs[j][0];
                int y2 = bombs[j][1];

                // making a directed edge

                LL distance = 1LL * (x2-x1)*(x2-x1) + 1LL * (y2-y1)*(y2-y1);

                if(1LL *r1*r1 >= distance) {
                    adj[i].push_back(j);
                }
            }
        }

        unordered_set<int> visited;
        int count = 0;

        for(int i=0;i<n;i++) {
            DFS(i,adj,visited);
            count = max(count,(int)visited.size());
            visited.clear();
        }

        return count;
    }
};