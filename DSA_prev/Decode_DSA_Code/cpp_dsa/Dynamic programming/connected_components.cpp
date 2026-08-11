#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph; // Adjacency list representation
int v; // Number of vertices

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void dfs(int node,unordered_set<int> &visited)
{
    visited.insert(node);
    for(auto nei:graph[node]) {
        if(!visited.count(nei)) {
            dfs(nei , visited);
        }
    }
}

int connected_components() {
    int result = 0;
    unordered_set<int> visited;
    for(int i=0; i<v;i++) {
        if(visited.count(i)==0) {
            result++;
            dfs(i , visited);
        }
    }
    return result;
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
    cout<<connected_components()<<"\n";
   // display(); // Display the graph
    return 0;
}
