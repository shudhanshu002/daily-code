#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fillDist(vector<int>& edges, int src, vector<int>& dist) {
        int d = 0;
        vector<bool> vis(edges.size(), false);

        while(src != -1 && !vis[src]) {
            vis[src] = true;
            dist[src] = d++;
            src = edges[src];
        }
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();

        vector<int> dist1(n, INT_MAX);
        vector<int> dist2(n, INT_MAX);

        fillDist(edges, node1, dist1);
        fillDist(edges, node2, dist2);

        int ans = -1;
        int best = INT_MAX;

        for(int i = 0; i<n;i++) {
            if(dist1[i] == INT_MAX || dist2[i] == INT_MAX)
                continue;

            int mx = max(dist1[i], dist2[i]);

            if(mx < best) {
                best = mx;
                ans = i;
            }
        }

        return ans;
    }
};