#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<double, int> P;

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>> adj(n);

        for(int i=0;i<edges.size();i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double succ = succProb[i];

            adj[u].push_back({v,succ});
            adj[v].push_back({u,succ});
        }

        vector<double> result(n, 0);

        priority_queue<P> pq;
        result[start_node] = 1;
        pq.push({1, start_node});

        while(!pq.empty()) {
            auto [currPro, node] = pq.top();
            pq.pop();

            if(currPro < result[node]) continue;

            if(node == end_node) return currPro;

            for(auto nei: adj[node]) {
                auto [next, nextPro] = nei;

                double newPro = currPro * nextPro;
                if(newPro > result[next]) {
                    result[next] = newPro;
                    pq.push({newPro, next});
                }
            }
        }

        return 0;
    }
};