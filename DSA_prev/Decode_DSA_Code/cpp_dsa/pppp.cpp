#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;  // adjacency list
int v; // number of vertices

// Add edge to the graph (directed)
void add_edge(int a, int b) {
    graph[a].push_back(b);  // Add directed edge a -> b
}

// Function to perform Topological Sort using BFS (Kahn's Algorithm)
void topoBFS() {
    vector<int> indegree(v, 0);  // Initialize indegree array to 0 for all vertices

    // Step 1: Calculate the indegree of each vertex
    for (int i = 0; i < v; i++) {
        for (auto neighbour : graph[i]) {
            indegree[neighbour]++;
        }
    }

    queue<int> qu;  // Queue to hold vertices with indegree 0
    // Step 2: Push all vertices with indegree 0 into the queue
    for (int i = 0; i < v; i++) {
        if (indegree[i] == 0) {
            qu.push(i);
        }
    }

    int count = 0;  // Variable to count processed nodes
    cout << "Topological Sort (using BFS/Kahn's Algorithm):\n";
    while (!qu.empty()) {
        int node = qu.front();
        cout << node << " ";  // Print the current node
        qu.pop();
        count++;

        // Step 3: Reduce indegree of all neighboring nodes
        for (auto neighbour : graph[node]) {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0) {
                qu.push(neighbour);  // If indegree becomes 0, add it to the queue
            }
        }
    }

    // Step 4: If count doesn't equal v, there's a cycle in the graph
    if (count != v) {
        cout << "\nCycle detected in the graph!" << endl;
    } else {
        cout << endl;
    }
}

int main() {
    // Input number of vertices and edges
    cin >> v;
    int e;
    cin >> e;

    // Resize graph to hold v vertices
    graph.resize(v);

    // Read the edges
    while (e--) {
        int x, y;
        cin >> x >> y;
        add_edge(x, y);  // Add directed edge from x to y
    }

    // Call the topological sort function
    topoBFS();
    return 0;
}

