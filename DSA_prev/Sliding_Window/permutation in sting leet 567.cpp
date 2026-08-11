#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ip INT_MAX
#define in INT_MIN
#define pp pair<int,int>
#define nl 'endl'
static ll mod = 1e9 + 7;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(n>m) return false;
        
        vector<int> s1_freq(26,0);
        vector<int> s2_freq(26,0);

        for(int i=0;i<n;i++) {
            s1_freq[s1[i] - 'a']++;
        }

        int j=0;
        int i=0;
        while(j<m){
            s2_freq[s2[j] - 'a']++;

            if(j-i+1 > n) {
                s2_freq[s2[i] - 'a']--;
                i++;
            }

            if(s1_freq == s2_freq) return true;
            j++;
        }
        return false;
    }
};
