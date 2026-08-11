#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        vector<int> freq(26,0);
        int maxFreq = 0,i = 0;

        int ans = 0;

        for(int j=0;j<s.length();j++) {
            freq[s[j] - 'A']++;
            maxFreq = max(maxFreq, freq[s[j] - 'A']);

            while((j-i+1) - maxFreq > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            ans = max(ans, j-i+1);
        }
        return ans;
    }
};