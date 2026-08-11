#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long largestRectangleArea(vector<int>& heights) {
        // nge
        // pge i
        int n = heights.size();
        vector<int> psi(n,-1), nsi(n, n);

        stack<int> st;

        for(int i=0;i<n;i++) {
            while(st.size() && heights[st.top()] >= heights[i]) st.pop();

            if(st.size()) psi[i] = st.top();

            st.push(i);
        }

        while(st.size()) st.pop();

        for(int i=n-1;i>=0;i--) {
            while(st.size() && heights[st.top()] >= heights[i]) st.pop();

            if(st.size()) nsi[i] = st.top();
            st.push(i);
        }

        long long maxArea = 0;
        for(int i=0;i<n;i++) {
            long long width = nsi[i] - psi[i] - 1;

            maxArea = max(maxArea, width*heights[i]);
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> bar(m,0);

        long long maxArea = 0;
        for(int i=0; i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == '1') bar[j]++;
                else bar[j] = 0;
            }
            maxArea = max(maxArea, largestRectangleArea(bar));
        }

        return maxArea;
    }
};