#include <bits/stdc++.h>
using namespace std;

// mthod-1 // using space
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; // min heap

        pq.push({prices[0], 0});
        int maxProfit = 0;
        for(int i=1;i<prices.size();i++) {
            int diff = prices[i] - pq.top().first;
            maxProfit = max(maxProfit, diff);
            pq.push({prices[i], i});
        }

        return maxProfit;
    }
};


// method 2 without space
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int ele = prices[0];
        for(int i=1;i<prices.size();i++){
            maxPro = max(maxPro, (prices[i]-ele));
            if(ele>prices[i]) ele = prices[i];
        }
        return maxPro;
    }
};