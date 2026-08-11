// Given a string s, find the length of the longest substring without repeating characters.
// Examples:
// Input:  s = "abcabcbb"
// Output: 3
// Explanation: "abc" is the longest substring

// Input:  s = "bbbbb"
// Output: 1

// Input:  s = "pwwkew"
// Output: 3
// Explanation: "wke"

#include <iostream>
#include <unordered_map>
using namespace std;

int fun(string s) {
    unordered_map<char, int> mp;

    int n = s.length();
    int left = 0;
    int len = 0;

    for (int right = 0; right < n; right++) {
        char ch = s[right];

        if (mp.count(ch)) {
            left = max(left, mp[ch] + 1);
        }

        mp[ch] = right;
        len = max(len, right - left + 1);
    }

    return len;
}

int main() {
    cout << fun("abcabcbb"); // Output: 3
}
