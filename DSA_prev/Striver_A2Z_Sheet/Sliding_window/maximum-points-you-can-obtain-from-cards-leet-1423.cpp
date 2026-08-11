#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        if(n==k) {
            return total;
        }

        int  sum = 0;
        for(int i=0;i<n-k;i++) {
            sum += cardPoints[i];
        }

        int minWindowSum = sum;

        for(int i=n-k;i<n;i++){
            sum += cardPoints[i];
            sum -= cardPoints[i-(n-k)];
            minWindowSum = min(minWindowSum, sum);
        }

        return total - minWindowSum;
    }
};