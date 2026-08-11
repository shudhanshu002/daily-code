#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<int,int> P;

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<P>> adj(n+1);

        for(auto vec: times) {
            int u = vec[0];
            int v = vec[1];
            int w = vec[2];

            adj[u].push_back({v,w});
        }

        priority_queue<P, vector<P>, greater<P>> pq;
        vector<int> result(n+1, INT_MAX);

        result[k] = 0;
        pq.push({0, k}); // time, node

        while(!pq.empty()) {
            auto [time, node] = pq.top();
            pq.pop();

            for(auto [next, nextTime]: adj[node]) {
                if(time + nextTime < result[next]) {
                    result[next] = time + nextTime;
                    pq.push({time+ nextTime, next});
                }
            }

        }

        int ans = INT_MIN;
        for(int i=1;i<=n;i++) ans = max(ans, result[i]);

        return ans==INT_MAX ? -1 : ans;
    }
};