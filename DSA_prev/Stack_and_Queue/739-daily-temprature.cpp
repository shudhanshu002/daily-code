#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ngi(n);
        stack<int> st;

        for(int i=n-1;i>=0;i--) {
            while(st.size() && temp[st.top()] <= temp[i]) st.pop();

            if(st.empty()) ngi[i] = i;
            else ngi[i] = st.top();

            st.push(i);
        }

        for(int i=0;i<n;i++) {
            ngi[i] = ngi[i] - i;
        }

        return ngi;
    }
};