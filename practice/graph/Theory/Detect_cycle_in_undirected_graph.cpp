#include <bits/stdc++.h>
using namespace std;

// tc O(V+E) sc O(V) dfs

bool dfs(int v, vector<vector<int>> &adj, vector<bool> &visited, int parent) {
    visited[v] = true;

    for(int i: adj[v]) {
        if(!visited[i]) {
            if(dfs(i, adj, visited, v)) return true;
        } else if(i != parent) {
            return true;
        }
    }

    return false;
}

bool isCycle(vector<vector<int>> adj) {
    int V = adj.size();

    vector<bool> visited(V, false);

    for(int u=0; u<V; u++) {
        if(!visited[u]) {
            if(dfs(u, adj, visited, -1)) return true;
        }
    }

    return false;
}



// tc O(V+E) sc O(V) bfs

bool bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<pair<int, int>> q;
    q.push({start, -1});
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, node});
            } else if (neighbor != parent) {
                return true;
            }
        }
    }
    
    return false; 
}

bool isCycle(vector<vector<int>>& adj) {
    
    int V= adj.size();
    vector<bool> visited(V, false); 

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
                if (bfs(i, adj, visited)) { 
                return true;
            }
        }
    }
    return false;
}


