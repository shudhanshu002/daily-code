// 🔴 Problem: Minimum Window Substring
// Given two strings s and t, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If no such window exists, return "".
// Input:  s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"

// Input:  s = "a", t = "a"
// Output: "a"

// Input:  s = "a", t = "aa"
// Output: ""
// Explanation: both a's needed, only one in s
// Constraints:

// 1 <= s.length <= 10^5
// 1 <= t.length <= 10^4
// s and t consist of uppercase and lowercase English letters


#include <bits/stdc++.h>
using namespace std;

string func(string s, string t) {
    unordered_map<char, int> mp;
    for(char c : t) mp[c]++;

    int required = t.length();
    int len = INT_MAX, start = -1;
    int left = 0;

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(mp[ch] > 0) required--;
        mp[ch]--;

        // ✅ FIX: valid window condition
        while(required == 0) {
            int tlen = i - left + 1;
            if(tlen < len) {
                len = tlen;
                start = left;
            }

            char leftch = s[left];
            mp[leftch]++;
            if(mp[leftch] > 0) required++;
            left++;
        }
    }

    if(start == -1) return "";
    return s.substr(start, len);
}

int main() {
    cout << func("ADOBECODEBANC", "ABC");
}