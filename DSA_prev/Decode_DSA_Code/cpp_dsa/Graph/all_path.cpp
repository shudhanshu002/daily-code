#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result; // Adjacency list representation
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

void dfs(int curr,int end,vector<int>&path) {
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return ;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour:graph[curr]) {
        if(not visited.count(neighbour)) {
            dfs(neighbour, end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return ;
}

void allPath(int src,int dest){
    vector<int> v;
    dfs(src,dest,v);
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

    int x,y;
    cin>>x>>y;
    allPath(x,y) ;
    for(auto path:result) {
        for(auto el:path) {
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}


