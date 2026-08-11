#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef long long ll;
    typedef pair<ll , int> P;

    vector<int> dijkstra(unordered_map<int, vector<P>> &adj, int src,int n ) {
        priority_queue<P, vector<P> , greater<P>> pq;

        vector<int> dist(n, INT_MAX);
        vector<int> visited(n, false);

        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty()) {
            auto [currWt, node] = pq.top();
            pq.pop();

            if(visited[node]) continue;

            for(auto nei: adj[node]) {
                auto [newNode, wt] = nei;

                if(dist[newNode] > currWt + wt) {
                    dist[newNode] = currWt + wt;
                    pq.push({currWt + wt, newNode});
                }
            }

            visited[node] = true;
        }

        return dist;
    }

    vector<bool> findAnswer(int n, vector<vector<int>>& edges) {
        int E = edges.size();

        unordered_map<int, vector<P>> adj;
        for(auto &edge: edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        vector<int> fromSrc = dijkstra(adj, 0, n);
        vector<int> fromDest = dijkstra(adj, n-1, n);

        vector<bool> result(E, false);

        for(int i = 0; i < E; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];

            ll distSrc = fromSrc[u];
            ll distEnd = fromDest[v];

            if(distSrc + w + distEnd == fromSrc[n-1]) {
                result[i] = true;
                continue;
            }

            distSrc  = fromSrc[v]; //x
            distEnd = fromDest[u]; //y
            if(distSrc + w + distEnd == fromSrc[n-1]) {
                result[i] = true;
            }
        }

        return result;
    }
};