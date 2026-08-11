#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;

        // Decide priority
        string first = "ab", second = "ba";
        int firstVal = x, secondVal = y;

        if (y > x) {
            first = "ba";
            second = "ab";
            firstVal = y;
            secondVal = x;
        }

        stack<char> st;

        // Remove higher value first
        for (char c : s) {
            if (!st.empty() && st.top() == first[0] && c == first[1]) {
                st.pop();
                score += firstVal;
            } else {
                st.push(c);
            }
        }

        // Build remaining string
        string remaining = "";
        while (!st.empty()) {
            remaining = st.top() + remaining;
            st.pop();
        }

        // Remove second pattern
        for (char c : remaining) {
            if (!st.empty() && st.top() == second[0] && c == second[1]) {
                st.pop();
                score += secondVal;
            } else {
                st.push(c);
            }
        }

        return score;
    }
};