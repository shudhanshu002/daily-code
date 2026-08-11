#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> freq(3);

        int i=0,j=0;
        int n=s.length();
        int count = 0;

        while(j<n) {
            char ch = s[j];
            freq[ch - 'a']++;

            while(freq[0] >=1 && freq[1] >= 1 && freq[2] >= 1) {
                count += n-j;
                freq[s[i] - 'a']--;
                i++;
            }
            j++;
        }
        return count;
    }
};