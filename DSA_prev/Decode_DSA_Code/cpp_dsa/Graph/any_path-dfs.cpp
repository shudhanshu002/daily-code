#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

using namespace std;

vector<list<int>> graph;
unordered_set<int> visited; // Adjacency list representation
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

// bool dfs(int curr,int end) {
//     visited.insert(curr);
//     if(curr==end) return true;
//     for(auto neighbour:graph[curr]) {
//         if(!visited.count(neighbour)) {
//             bool result = dfs(neighbour, end);
//             if(result) return true;
//         }
//     }
//     return false;
// }

bool dfs(int curr,int end){
    visited.insert(curr);
    if(curr == end) return true;
    for(auto neighbour:graph[curr]) {
        if(!visited.count(neighbour)) {
            bool result = dfs(neighbour , end);
            if(result) return true;
        }
    }
    return false;
}

vector<vector<int>> allPaths;
unordered_set<int> s1;

void dfs1(int curr,int end,vector<int> &path){
    if(curr == end){
        path.push_back(curr);
        allPaths.push_back(path);
        path.pop_back();
        return;
    }

    s1.insert(curr);
    path.push_back(curr);
    for(auto nei: graph[curr]) {
        if(!s1.count(nei)){
            dfs1(nei,end,path);
        }
    }
    path.pop_back();
    s1.erase(curr);
    return;
}

bool anyPath(int src,int dest){
    visited.clear();
    return dfs(src, dest);
}

void all(int src,int dest){
    vector<int> path;
    s1.clear();
    dfs1(src,dest,path);
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
    cout<<(bool)anyPath(x,y)<<endl;
    all(x,y);
    cout<< "Total Paths" << allPaths.size()<<endl;
    for(int i=0;i<allPaths.size();i++){
        for(int j=0;j<allPaths[i].size();j++){
            cout<<allPaths[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}


