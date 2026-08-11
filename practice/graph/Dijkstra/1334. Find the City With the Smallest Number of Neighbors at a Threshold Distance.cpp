#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<int, int> P;

    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>> adj(n);

        for(auto edge: edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }

        int minReachable = INT_MAX;
        int answer = -1;

        for(int src = 0; src < n; src++) {
            vector<int> dist(n, INT_MAX);

            priority_queue<P, vector<P>, greater<P>> pq;
            dist[src] = 0;
            pq.push({0, src});

            while(!pq.empty()) {
                auto [d, node] = pq.top();
                pq.pop();

                if(d > dist[node] ) continue;

                for(auto [nei, wt]: adj[node]) {
                    if(d + wt < dist[nei]) {
                        dist[nei] = d + wt;
                        pq.push({dist[nei], nei});
                    }
                }
            }

            int count = 0;
            for(int i=0;i<n;i++) {
                if(dist[i] <= distanceThreshold) count++;
            }
            count--; // remmove self

            if(count <= minReachable) {
                minReachable = count;
                answer = src;
            }
        }
        return answer;
    }
};