#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<char, int> mp = {
            {'I',1},{'V',5},{'X',10},{'L',50},
            {'C',100},{'D',500},{'M',1000}
        };

    int romanToInt(string s) {
        int sum = 0;
        int n = s.length();
        char last = s[n-1];
        sum += mp[s[n-1]];

        for(int i = n-2;i>=0;i--) {
            if(mp[s[i]] >= mp[last]) {
                sum += mp[s[i]];
                last = s[i];
            } else {
                sum -= mp[s[i]];
            }
        }

        return sum;
    }
};