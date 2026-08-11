#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string res,temp;
        stringstream ss(path);

        while(getline(ss,temp,'/')) {
            if(temp == "" || temp==".") continue;
            if(temp == "..") {
                if(!st.empty()) st.pop();
            } else {
                st.push(temp);
            }
        }
        while(!st.empty()) {
            res = "/"+st.top() +res;
            st.pop();
        }
        return res.empty()?"/":res;
    }
};