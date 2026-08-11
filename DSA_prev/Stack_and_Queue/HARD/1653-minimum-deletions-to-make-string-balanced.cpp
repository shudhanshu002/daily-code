#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int count = 0;
        for(auto &x:s){
            if(st.empty()) st.push(x);
            else if(x == 'a' && st.top() == 'b') {
                count++;
                st.pop();
            }
            else st.push(x);
        }
        return count;
    }
};