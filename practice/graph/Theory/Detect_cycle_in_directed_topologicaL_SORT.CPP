#include <bits/stdc++.h>
using namespace std;

// KAHN'S ALGO
// tc - O(V+E) 
//sc - O(V)

bool isCyclic(vector<vector<int>> &adj) {
    int V = adj.size();

    vector<int> inDegree(V,0);
    queue<int> q;


    int visited = 0;

    for(int u=0;u<V;u++) {
        for(auto v: adj[u]) {
            inDegree[v]++;
        }
    }

    for(int u=0; u <V; u++){
        if(inDegree[u] == 0) q.push(u); 
    }

    while(!q.empty()) {
        auto node = q.front();
        q.pop();
        visited++;

        for(auto x: adj[node]){
            inDegree[x]--;
            if(inDegree[x] == 0) {
                q.push(x);
            }
        }
    }

    return visited != V;
}

int main()
{
 
    vector<vector<int>> adj = {{1},{2},{0, 3}};

    cout << (isCyclic(adj) ? "true" : "false") << endl;

    return 0;
}