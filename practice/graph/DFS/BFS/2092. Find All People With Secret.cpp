#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<vector<pair<int,int>>> adj(n);

        for(auto meet: meetings) {
            int a = meet[0];
            int b = meet[1];
            int time = meet[2];

            adj[a].push_back({b,time});
            adj[b].push_back({a,time});
        }

        vector<int> knowTime(n, INT_MAX);

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        knowTime[0] = 0;
        knowTime[firstPerson] = 0;

        pq.push({0,0}); // time, person
        pq.push({0, firstPerson});

        while(!pq.empty()) {
            auto [time, person] = pq.top();
            pq.pop();

            if(time > knowTime[person]) continue;

            for(auto &[nei, nextTime]:adj[person]) {
                if(nextTime >= time && nextTime < knowTime[nei]) {
                    knowTime[nei] = nextTime;
                    pq.push({nextTime, nei});
                }
            }
        }

        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(knowTime[i] != INT_MAX) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};