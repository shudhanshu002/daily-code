#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(unordered_map<int, vector<pair<int,int>>> &mp,int st, vector<bool> &visi,int &re){
        visi[st] = true;

        for(auto [x,y]:mp[st]) {
            re = min(re, y);
            
            if(visi[x] == false) {
                dfs(mp, x, visi, re);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        int k = roads.size();

        unordered_map<int, vector<pair<int,int>>> mp;
        for(int i=0;i<k;i++) {
            int u = roads[i][0];
            int v = roads[i][1];
            int wt = roads[i][2];

            mp[u].push_back({v,wt});
            mp[v].push_back({u,wt});
        }

        int result = INT_MAX;
        vector<bool> visi(n+1, false);

        dfs(mp, 1, visi, result);
        return result;
    }
};