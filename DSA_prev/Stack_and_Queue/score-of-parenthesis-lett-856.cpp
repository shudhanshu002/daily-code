#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<string> st;
        int i = 0;

        while (i < s.length()) {
            if (s[i] == '(' && s[i + 1] == ')') {
                st.push("1");
                i++;
            } else if (s[i] == '(') {
                st.push("(");
            } else {
                int sum = 0;
                while(st.top() != "(") {
                    sum += stoi(st.top());
                    st.pop();
                }
                st.pop();
                st.push(to_string(sum*2));
            }
            i++;
        }

        int sum = 0;
        while(st.size()) {
            sum += stoi(st.top());
            st.pop();
        }
        return sum;
    }
};