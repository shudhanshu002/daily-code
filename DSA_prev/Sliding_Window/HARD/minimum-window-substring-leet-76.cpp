#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = t.size();
        int m = s.size();

        if(n > m) return "";

        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) mp[t[i]]++;

        int required = n;

        int i=0, j = 0;
        int minLen = INT_MAX;
        int st = 0;

        while(j < m) {
            char ch = s[j];
            if(mp[ch] > 0) required--;
            mp[ch]--;

            while(required == 0) {
                int len = j - i + 1;
                if(minLen > len) {
                    st = i;
                    minLen = len;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0) required++;
                i++;
            }
            j++;
        }

        if(minLen == INT_MAX) return "";
        return s.substr(st, minLen);
    }
};
