// Given a string s and an integer k, return the length of the longest substring of s that contains at most k distinct characters.

 

// Example 1:

// Input: s = "eceba", k = 2
// Output: 3
// Explanation: The substring is "ece" with length 3.
// Example 2:

// Input: s = "aa", k = 1
// Output: 2
// Explanation: The substring is "aa" with length 2.
 

// Constraints:

// 1 <= s.length <= 5 * 104
// 0 <= k <= 50
// Solutions

#include <bits/stdc++.h>
using namespace std;



// int ans = 0;
// for (int r = 0; r < s.size(); r++) {
//     cnt[s[r]]++;
//     while (cnt.size() > k) {
//         if (--cnt[s[l]] == 0)
//             cnt.erase(s[l]);
//         l++;
//     }
//     ans = max(ans, r - l + 1);
// }
// return ans;
