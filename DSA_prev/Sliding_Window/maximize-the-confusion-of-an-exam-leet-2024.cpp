#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(string &s, int k,char target) {
        int left = 0, flips = 0, ans = 0;

        for(int right = 0;right<s.length();right++) {
            if(s[right] != target) flips++;

            while(flips > k) {
                if(s[left] != target) flips--;
                left++;
            }

            ans = max(ans, right-left+1);
        }

        return ans;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey,k, 'T'), solve(answerKey,k, 'F'));
    }
};