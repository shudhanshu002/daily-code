#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#define ll long long int
#define pp pair<int, int>
#include <bits/stdc++.h>
using namespace std;



vector<vector<pp>> graph;

void add_edge(int u, int v, int wt, bool bidir = true)
{
    graph[u].push_back({v, wt});
    if (bidir)
    {
        graph[v].push_back({u, wt});
    }
}

vector<int> dijkstra(int src, int n)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    vector<int> dist(n + 1, INT_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        auto [currDist, u] = pq.top();
        pq.pop();

        if (currDist > dist[u])
            continue;

        for (auto [v, wt] : graph[u])
        {
            if (dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main()
{
    int n, m;
    cin >> n >> m;

    graph.resize(n + 1);

    while (m--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt);
    }

    int src;
    cin >> src;

    vector<int> dist = dijkstra(src, n);

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << dist[i] << "\n";
    }

    int dest;
    cin >> dest;
    cout << dist[dest] << "\n";

    return 0;
}
