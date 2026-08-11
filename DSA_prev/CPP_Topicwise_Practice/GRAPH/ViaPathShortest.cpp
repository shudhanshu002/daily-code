#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#define ll long long int
#define pp pair<int, int>
using namespace std;

vector<vector<pp>> graph;

/* ---------- ADD EDGE ---------- */
void add_edge(int u, int v, int wt, bool bidir = true)
{
    graph[u].push_back({v, wt});
    if (bidir)
    {
        graph[v].push_back({u, wt});
    }
}

/* ---------- DIJKSTRA ---------- */
vector<int> dijkstra(int src, int n, vector<int> &parent)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    vector<int> dist(n + 1, INT_MAX);

    dist[src] = 0;
    parent[src] = -1; // source has no parent
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
                parent[v] = u; // VIA PATH STORED HERE
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

/* ---------- PRINT PATH ---------- */
void printPath(int src, int dest, vector<int> &parent)
{
    if (parent[dest] == -1 && src != dest)
    {
        cout << "No path exists\n";
        return;
    }

    vector<int> path;
    for (int v = dest; v != -1; v = parent[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    cout << "Path: ";
    for (int node : path)
    {
        cout << node << " ";
    }
    cout << "\n";
}

/* ---------- MAIN ---------- */
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

    vector<int> parent(n + 1, -1);
    vector<int> dist = dijkstra(src, n, parent);

    // Print shortest distances
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " Distance " << dist[i] << "\n";
    }

    int dest;
    cin >> dest;

    cout << "Shortest distance to " << dest << " = " << dist[dest] << "\n";
    printPath(src, dest, parent);

    return 0;
}
