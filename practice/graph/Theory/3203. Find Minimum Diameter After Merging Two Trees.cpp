#include <bits/stdc++.h>
using namespace std;

// brute force
class Solution {
public:
    int findLongestBranchLength(vector<vector<int>> &edges, int n){
        int len = 0;

        queue<int> q;
        q.push(n);
        unordered_set<int> st;
        st.insert(n);
        // cout<<"start"<<endl<<endl;

        while(!q.empty()) {
            int sz = q.size();

            while(sz--) {
                int node = q.front();
                // cout<<node<<" "<<len<<endl;
                q.pop();

                for(auto nei: edges[node]) {
                    if(!st.count(nei)) {
                        st.insert(nei);
                        q.push(nei);
                    }
                }
            }
            if(!q.empty()) len++;
        }
        // cout<<"end"<<endl<<endl;

        return len;
    }

    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int n = edges1.size() + 1;
        int m = edges2.size() + 1;

        vector<vector<int>> adj1(n),adj2(m);
        for(auto edge:edges1) {
            int u = edge[0];
            int v = edge[1];

            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }

        for(auto edge:edges2) {
            int u = edge[0];
            int v = edge[1];

            adj2[u].push_back(v);
            adj2[v].push_back(u);
        }

        int d1 = INT_MIN;
        int d2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;

        // mindiameter so diameter of tree originally can be greater then resultant so ans would be max(d1,d2,1+r1+r2);

        for(int i=0;i<n;i++) {
            int len = findLongestBranchLength(adj1, i);
            r1 = min(r1,len);
            d1 = max(d1,len);
        }


        for(int i=0;i<m;i++) {
            int len = findLongestBranchLength(adj2, i);
            r2 = min(r2,len);
            d2 = max(d2,len);
        }

        return max({d1,d2,1+r1+r2});
    }
};


// optimised
// radius=ceil(diameter/2)

// This is a fundamental property of trees.

// Definitions

// Diameter
// = length of the longest path in the tree.

// Eccentricity of a node
// = maximum distance from that node to any other node.

// Radius
// = minimum eccentricity among all nodes.

class Solution {
public:

    pair<int,int> bfs(int start, vector<vector<int>>& adj) {
        int n = adj.size();

        queue<int> q;
        vector<bool> vis(n,false);

        q.push(start);
        vis[start] = true;

        int dist = 0;
        int farthest = start;

        while(!q.empty()) {
            int sz = q.size();

            while(sz--) {
                int node = q.front();
                q.pop();

                farthest = node;

                for(int nei : adj[node]) {
                    if(!vis[nei]) {
                        vis[nei] = true;
                        q.push(nei);
                    }
                }
            }

            if(!q.empty()) dist++;
        }

        return {farthest, dist};
    }

    int getDiameter(vector<vector<int>>& adj) {

        auto [nodeA, _] = bfs(0, adj);

        auto [nodeB, diameter] = bfs(nodeA, adj);

        return diameter;
    }

    int minimumDiameterAfterMerge(vector<vector<int>>& edges1,
                                  vector<vector<int>>& edges2) {

        int n = edges1.size() + 1;
        int m = edges2.size() + 1;

        vector<vector<int>> adj1(n);
        vector<vector<int>> adj2(m);

        for(auto &e : edges1) {
            adj1[e[0]].push_back(e[1]);
            adj1[e[1]].push_back(e[0]);
        }

        for(auto &e : edges2) {
            adj2[e[0]].push_back(e[1]);
            adj2[e[1]].push_back(e[0]);
        }

        int d1 = getDiameter(adj1);
        int d2 = getDiameter(adj2);

        int r1 = (d1 + 1) / 2;
        int r2 = (d2 + 1) / 2;

        return max({d1, d2, r1 + r2 + 1});
    }
};