#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#define ll long long int
#define pp pair<int, int>
#include <bits/stdc++.h>
using namespace std;



vector<list<pp>> gr;
void add_edge(int u, int v, int wt, bool bidir = true)
{
    gr[u].push_back({v, wt});
    if (bidir)
    {
        gr[v].push_back({u, wt});
    }
}


ll prisms(int src, int n){
    // visited ka set -- to maintain visited node
    // priority_queue -- to give minimum weight possible
    // weight (kis weight se discover ho rahah hai koi node) -- which will be updated further to get best minimum possible
    // parent ka hona chahiye

    priority_queue<pp, vector<pp> , greater<pp>> minWeight;
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int, int> discover;
    for(int i=1;i<=n;i++){
        discover[i] = INT_MAX;
    }

    minWeight.push({0, src});
    discover[src] = 0;
    int total_count = 0; // 0 -> n-1
    int result = 0; // total msb edge weight
    while(total_count<n && !minWeight.empty()) {
        pp curr = minWeight.top();
        if(vis.count(curr.second)) {
            minWeight.pop();
            continue;
        }

        vis.insert(curr.second);
        total_count++;
        result += curr.first;
        minWeight.pop();

        for(auto nei: gr[curr.second]) {
            if(!vis.count(nei.first) && discover[nei.first] > nei.second) {
                minWeight.push({nei.second, nei.first});
                par[nei.first] = curr.second;
                discover[nei.first] = nei.second;
            }
        }
    }
    return result;
}


signed main() {

    int n, m;
    cin >> n >> m;
    gr.resize(n + 1, list<pp>());
    while (m--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt);
    }

    int src;
    cin >> src;
    cout << prisms(src, n) << "\n";
    return 0;

    return 0;
}