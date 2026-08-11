#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;

        for(char ch: s){
            if(ch == ']') {
                if(st.size() && st.top() == '[') st.pop();
                else st.push(ch);
            } else {
                st.push(ch);
            }
        }

        if(st.size()==0) return 0;
        return ((st.size()/2) + 1) / 2;
    }
};