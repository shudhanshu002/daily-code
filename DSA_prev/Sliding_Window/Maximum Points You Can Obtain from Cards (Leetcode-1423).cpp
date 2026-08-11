#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        if(k == n) return total;

        int minSum = 0;
        int sum = 0;

        for(int i = 0;i<n - k;i++) {
            sum += cardPoints[i];
        }

        minSum = sum;

        int i=0;
        for(int j = n-k;j<n;j++){
            sum += cardPoints[j];
            sum -= cardPoints[i++];
            minSum = min(minSum, sum);
        }

        return total - minSum;
    }
};