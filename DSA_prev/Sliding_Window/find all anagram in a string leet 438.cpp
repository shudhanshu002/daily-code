#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length();
        int m = s.length();

        if(n > m) return {};

        vector<int> p_freq(26,0);
        vector<int> s_freq(26,0);

        for(int i=0;i<n;i++) p_freq[p[i] - 'a']++;

        vector<int> indices;
        int i=0,j=0;
        while(j<m) {
            s_freq[s[j] - 'a']++;

            if(j-i+1 > n){
                s_freq[s[i] - 'a']--;
                i++;
            }

            if(s_freq == p_freq) indices.push_back(i);
            j++;
        }

        return indices;
    }
};