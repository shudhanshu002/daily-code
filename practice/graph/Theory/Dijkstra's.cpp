#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& adj, int src) {
    const int INF = 1e9;

    vector<int> dist(n, INF);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while(!pq.empty()) {
        auto [d,u] = pq.top();
        pq.pop();

        if(d > dist[u]) continue;;

        for(auto [v,wt]: adj[u]) {
            if(dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int n = 5;

    vector<vector<pair<int, int>>> adj(n);

    auto addEdge = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    addEdge(0, 1, 4);
    addEdge(0, 2, 1);
    addEdge(2, 1, 2);
    addEdge(1, 3, 1);
    addEdge(2, 3, 5);
    addEdge(3, 4, 3);

    vector<int> dist = dijkstra(n, adj, 0);

    for (int i = 0; i < n; i++)
        cout << "0 -> " << i << " = " << dist[i] << '\n';
}