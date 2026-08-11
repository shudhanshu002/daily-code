#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
#include <unordered_set>
#include <queue>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

vector<list<int>> graph;
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

bool anyPathBFS(int src,int dest) {
    queue<int> q;
    unordered_set<int> vis;

    q.push(src);
    vis.insert(src);

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        if(curr == dest) return true;

        for(int nei:graph[curr]) {
            if(!vis.count(nei)) {
                vis.insert(nei);
                q.push(nei);
            }
        }
    }
    return false;
}

signed main() {
    fast;
    
    
    
    return 0;
}