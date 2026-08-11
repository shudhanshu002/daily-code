#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(string &pat, string &txt) {
        int n = txt.length();
        int m = pat.length();
        
        if(m > n) return 0;
        
        vector<int> pat_freq(26, 0);
        vector<int> window_freq(26, 0);
        
        // Step 1: build pattern frequency
        for(int i = 0; i < m; i++) {
            pat_freq[pat[i] - 'a']++;
            window_freq[txt[i] - 'a']++;
        }
        
        int count = 0;
        
        // Check first window
        if(pat_freq == window_freq) count++;
        
        // Step 2: Slide window
        for(int i = m; i < n; i++) {
            // Add new character
            window_freq[txt[i] - 'a']++;
            
            // Remove old character
            window_freq[txt[i - m] - 'a']--;
            
            // Compare
            if(pat_freq == window_freq) count++;
        }
        
        return count;
    }
};
