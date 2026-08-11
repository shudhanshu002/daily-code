#include <bits/stdc++.h>
using namespace std;
const int MAX = 100001;

bool visit[MAX] = {0};

int intime[MAX];
int outtime[MAX];

int timer = 0;

void dfs(vector<int> graph[], int v) {
    visit[v] = timer;

    vector<int>::iterator it = graph[v].begin();
    while (it != graph[v].end())
    {
        if(visit[*it] == false) dfs(graph, *it);
        it++;
    }

    ++timer;
    outtime[v] = timer;
    
}

bool query(int u, int v)
{
    return ( (intime[u]<intime[v] && outtime[u]>outtime[v]) ||
             (intime[v]<intime[u] && outtime[v]>outtime[u]) );
}