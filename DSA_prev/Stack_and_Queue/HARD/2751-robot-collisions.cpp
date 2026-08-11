#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> indices(n);

        iota(indices.begin(), indices.end(), 0);
        stack<int> st;

        auto lambda = [&](int i,int j) {
            return positions[i] < positions[j];
        };

        sort(indices.begin(), indices.end(), lambda);

        vector<int> result;
        for(int currIdx: indices) {
            if(directions[currIdx] == 'R') {
                st.push(currIdx);
            } else {
                while(!st.empty() && healths[currIdx] > 0) {
                    int topIdx = st.top();
                    st.pop();

                    if(healths[topIdx] > healths[currIdx]) {
                        healths[topIdx] -= 1;
                        healths[currIdx] = 0;
                        st.push(topIdx);
                    } else if(healths[topIdx] < healths[currIdx]) {
                        healths[currIdx] -= 1;
                        healths[topIdx] = 0;
                    } else {
                        healths[currIdx] = 0;
                        healths[topIdx] = 0;
                    }
                }
            }
        }

        for(int i=0;i<n;i++) {
            if(healths[i] > 0) {
                result.push_back(healths[i]);
            }
        }

        return result;
    }
};