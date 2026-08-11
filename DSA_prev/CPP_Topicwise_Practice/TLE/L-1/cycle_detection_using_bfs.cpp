#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

// Function to add edge between nodes
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

// Display function (for debugging)
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) {
            cout << el << " , ";
        }
        cout << "\n";
    }
}

// BFS to detect cycle in an undirected graph
bool bfs(int src, unordered_set<int>& vis) {
    queue<int> qu;
    vector<int> par(v, -1);

    qu.push(src);
    vis.insert(src);

    while (!qu.empty()) {
        int curr = qu.front();
        qu.pop();

        for (auto nei : graph[curr]) {
            if (vis.count(nei) && par[curr] != nei) {
                // Cycle detected
                return true;
            }
            if (!vis.count(nei)) {
                vis.insert(nei);
                par[nei] = curr;
                qu.push(nei);
            }
        }
    }
    return false;
}

// Function to check for cycle in all components
bool has_cycle() {
    unordered_set<int> vis;
    for (int i = 0; i < v; i++) {
        if (!vis.count(i)) {
            if (bfs(i, vis)) {
                return true;
            }
        }
    }
    return false;
}

// Main function
int main() {
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, false);  // false since undirected but handled in add_edge
    }

    bool cycle = has_cycle();
    cout << (cycle ? "1\n" : "0\n");

    return 0;
}
