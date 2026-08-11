#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        string re = "";
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]==')') {
                string temp = "";
                while(st.top()!='('){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                for(int i=0;i<temp.length();i++){
                    st.push(temp[i]);
                }
            }else st.push(s[i]);
        } 
        while(st.size()){
            re = st.top() + re;
            st.pop();
        }
        return re;
    }
};