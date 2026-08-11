// all tc O(n) and sc O(n);
#include <bits/stdc++.h>
using namespace std;


// dfs solution
class Solution {
public:
    int re = -1;
    void cycle(int u, vector<int> &edges, vector<bool> &visited, vector<bool> &inRecursion,vector<int> &depth, int currDepth) {
        inRecursion[u] = true;
        visited[u] = true;
        depth[u] = currDepth;

        int v = edges[u];

        if(v != -1){
            if(!visited[v]) {
                cycle(v, edges, visited, inRecursion, depth, currDepth+1);
            } else if(inRecursion[v]) {
                //cycle detected;
                re = max(re, currDepth - depth[v]+1);
            }
        }

        inRecursion[u] = false;
    }

    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool> visited(n,false);
        vector<bool> inRecursion(n,false);
        vector<int> depth(n, 0);
        for(int i=0; i<edges.size();i++){
            if(!visited[i]) {
                cycle(i,edges,visited,inRecursion,depth,0);
            }
        }
        return re;
    }
};

// more like bfs
class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool> visited(n,false);

        int ans = -1;
        for(int i=0; i < n;i++) {
            if(visited[i]) continue;

            unordered_map<int, int> dist;

            int node = i;
            int step = 0;

            while(node != -1 && !visited[node]) {
                visited[node] = true;
                dist[node] = step++;
                node = edges[node];
            }

            if(node != -1 && dist.count(node)) {
                ans = max(ans,step - dist[node]);
            }
        }

        return ans;
    }
};

// topological sol
class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();

        vector<int> indegree(n, 0);

        for(int i = 0; i < n; i++) {
            if(edges[i] != -1)
                indegree[edges[i]]++;
        }

        queue<int> q;

        for(int i = 0; i < n; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        vector<bool> removed(n, false);

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            removed[u] = true;

            int v = edges[u];

            if(v != -1) {
                indegree[v]--;

                if(indegree[v] == 0)
                    q.push(v);
            }
        }

        int ans = -1;

        for(int i = 0; i < n; i++) {

            if(removed[i]) continue;

            int cnt = 0;
            int curr = i;

            while(!removed[curr]) {
                removed[curr] = true;
                cnt++;
                curr = edges[curr];
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};