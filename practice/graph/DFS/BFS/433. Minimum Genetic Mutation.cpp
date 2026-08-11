#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        int n = startGene.length();

        vector<char> gene = {'A','C','G','T'};

        int steps = 0;
        unordered_set<string> st;
        for(auto x:bank) st.insert(x);

        queue<string> q;
        q.push(startGene);


        while(!q.empty()) {
            int sz = q.size();

            while(sz--) {
                string curr = q.front();
                q.pop();

                if(curr == endGene) return steps;

                for(int i=0;i<8;i++) {
                    string temp = curr;
                    for(auto ch:gene) {
                        temp[i] = ch;
                        if(st.count(temp)) {
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
            steps++;
        }

        return -1;
    }
};