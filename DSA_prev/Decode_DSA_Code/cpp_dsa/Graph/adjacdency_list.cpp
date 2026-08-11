#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<list<int>> graph; // Adjacency list representation
int v; // Number of vertices

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) {
            cout << el << " , ";
        }
        cout << endl;
    }
}

int main() {
    cin >> v;
    graph.resize(v); // Corrected resize

    int e;
    cin >> e; // Number of edges

    while (e--) {
        int s, d;
        cin >> s >> d; // Input source and destination
        add_edge(s, d);
    }

    display(); // Display the graph
    return 0;
}

