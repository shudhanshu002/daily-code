#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
void add_edge(int a,int b,bool bidir = true){
    graph[a].push_back(b);
    if(bidir) {
        graph[b].push_back(a);
    }
}

void topoBFS() {
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++) {
        for(auto nei: graph[i]) {
            indegree[nei]++;
        }
    }

    queue<int> qu;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(indegree[i]==0) {
            qu.push(i);
            vis.insert(i);
        }
    }

    cout<<"Starting bfs\n";
    while(!qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto nei:graph[node]) {
            if(!vis.count(nei)) {
                indegree[nei]--;
                if(indegree[nei]==0){
                    qu.push(nei);
                    vis.insert(nei);
                }
            }
        }
    }
}

int main() {
     cin>>v;
    int e; 
    cin>>e;
    graph.resize(v, list<int> ());
    while(e--) {
        int x, y;
        cin>>x>>y;
        add_edge(x, y, false);
    }
    topoBFS();

    return 0;
}