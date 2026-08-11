#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int MOD = 1e9 + 7;

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> psi(n, -1), nsi(n, n);
        stack<int> st;

        // Previous Smaller (strictly smaller)
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();

            psi[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Next Smaller (smaller or equal)
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        long long ans = 0;

        for(int i = 0; i < n; i++) {
            long long left = i - psi[i];
            long long right = nsi[i] - i;

            long long contri = (1LL * arr[i] * left * right) % MOD;
            ans = (ans + contri) % MOD;
        }

        return ans;
    }
};
