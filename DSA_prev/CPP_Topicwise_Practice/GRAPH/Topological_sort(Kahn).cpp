#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

vector<list<int>> graph;
int v;

void add_edge(int a, int b, bool bidir = true)
{
    graph[a].push_back(b);
    if (bidir)
        graph[b].push_back(a);
}

void topoBFS()
{
    vector<int> indegree(v, 0);

    for (int i = 0; i < v; i++)
    {
        for (auto nei : graph[i])
        {
            indegree[nei]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    vector<int> topo;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for (auto nei : graph[node])
        {
            indegree[nei]--;
            if (indegree[nei] == 0)
                q.push(nei);
        }
    }

    // cycle check
    if (topo.size() != v)
    {
        cout << "Cycle detected. Topological sort not possible\n";
        return;
    }

    // print topo order
    for (int x : topo)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    fast;

    int e;
    cin >> v >> e;
    graph.resize(v);

    while (e--)
    {
        int x, y;
        cin >> x >> y;
        add_edge(x, y, false);
    }

    topoBFS();
    return 0;
}
