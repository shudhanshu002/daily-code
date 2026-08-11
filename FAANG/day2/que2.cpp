// 🔴 Problem: Longest Substring with At Most K Distinct Characters
// Given a string s and integer k, return the length of the longest substring that contains at most k distinct characters.
// Input:  s = "eceba", k = 2
// Output: 3
// Explanation: "ece" has 2 distinct chars, length=3

// Input:  s = "aa", k = 1
// Output: 2

// Input:  s = "aabbcc", k = 2
// Output: 4
// Explanation: "aabb" or "bbcc" → length=4

// Input:  s = "abcadcacacaca", k = 3
// Output: 11
// Explanation: "dcacacacacaca" -- wait let me recount
//              "cadcacacaca" → length=11
// Constraints:

// 1 <= s.length <= 5 * 10^4
// 0 <= k <= 50

#include <bits/stdc++.h>
using namespace std;

int func(string &s, int k) {
    unordered_map<char,int> mp;

    int n = s.length(), left = 0, len = 0;

    for(int i = 0; i < n; i++) {
        char ch = s[i];
        mp[ch]++;

        while(mp.size() > k) {
            char leftchar = s[left];
            mp[leftchar]--;
            if(mp[leftchar] == 0) mp.erase(leftchar);
            left++;
        }

        len = max(len, i - left + 1);
    }

    return len;
}

int main() {
    string s = "aabbcc";
    cout<<func(s, 2);
}