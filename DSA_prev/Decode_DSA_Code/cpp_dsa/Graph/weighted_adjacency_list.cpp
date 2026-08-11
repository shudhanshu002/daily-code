#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<list<pair<int,int>>> graph; // Adjacency list representation
int v; // Number of vertices

void add_edge(int src, int dest,int wt, bool bi_dir = true) {
    graph[src].push_back({dest,wt});
    if (bi_dir) {
        graph[dest].push_back({src,wt});
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) {
            cout <<"("<< el.first << " "<<el.second<<") , ";
        }
        cout << endl;
    }
}

int main() {
    cin >> v;
    graph.resize(v,list<pair<int,int>> ()); // Corrected resize

    int e;
    cin >> e; // Number of edges

    while (e--) {
        int s, d,wt;
        cin >> s >> d>>wt; // Input source and destination
        add_edge(s, d,wt);
    }

    display(); // Display the graph
    return 0;
}

