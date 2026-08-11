#include <bits/stdc++.h>
using namespace std;
//Tc - O(V+E) and O(V) space
bool isCyclicCheck(vector<vector<int>> &adj,int u,vector<bool> &visited,vector<bool> &inRecursion) {
    if(inRecursion[u]) return true;
    if(visited[u]) return false;

    visited[u] = true;
    inRecursion[u] = true;

    for(int v: adj[u]) {
        if(isCyclicCheck(adj, v, visited, inRecursion)) return true;
    }

    inRecursion[u] = false;
    return false;
}

bool isCyclic(vector<vector<int>> &adj) {
    int V = adj.size();
    vector<bool> visited(V,false);
    vector<bool> inRecursion(V,false);

    for(int i=0;i<V;i++) {
        if(!visited[i] && isCyclicCheck(adj,i,visited,inRecursion)) return true;
    }

    return false;
}