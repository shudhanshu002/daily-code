#include <bits/stdc++.h>
using namespace std;

int prim(int n, vector<vector<pair<int,int>>> & adj) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<bool> visited(n, false);

    pq.push({0,0});
    int mstWeight = 0;

    while(!pq.empty()) {
        auto [wt, u] = pq.top();
        pq.pop();

        if(visited[u]) continue;

        visited[u] = true;
        mstWeight += wt;

        for(auto [v, weight]: adj[u]) {
            if(!visited[v]) {
                pq.push({weight, v});
            }
        }

        return mstWeight;
    }
}

int main() {
    int n =4;

    vector<vector<pair<int, int>>> adj(n);

    auto addEdge = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    addEdge(0, 1, 10);
    addEdge(0, 2, 6);
    addEdge(0, 3, 5);
    addEdge(1, 3, 15);
    addEdge(2, 3, 4);

    cout << prim(n, adj);
}