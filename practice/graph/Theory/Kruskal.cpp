#include <bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent, rank;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n,0);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);

        if(a == b) return false;
        if(rank[a] < rank[b]) {
            swap(a, b);
        }

        parent[b] = a;
        if(rank[a] == rank[b]) rank[a]++;

        return true;
    } 
};

int kruskal(int n, vector<vector<int>> &edges) {
    sort(edges.begin(), edges.end());

    DSU dsu(n);
    int mstWeight = 0;

    for(auto edge: edges) {
        int wt = edge[0];
        int u = edge[1];
        int v = edge[2];

        if(dsu.unite(u,v)) {
            mstWeight += wt;
        }
    }

    return mstWeight;
}

int main() {
    int n = 4;

    vector<vector<int>> edges = {
        {10, 0, 1},
        {6, 0, 2},
        {5, 0, 3},
        {15, 1, 3},
        {4, 2, 3}
    };


    cout<< kruskal(n, edges);
}