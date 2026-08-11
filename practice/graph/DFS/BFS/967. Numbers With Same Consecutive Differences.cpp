#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> ans;

    void dfs(string num,int n,int k) {
        if(num.length() > n) return;

        if(num.length() == n) {
            ans.push_back(stoi(num));
            return;
        }

        int digi = num.back() - '0';
        if(digi + k < 10) {
            char ch = (digi + k) + '0';
            dfs(num + ch, n ,k);
        }
        
        if(k!=0 && digi - k >= 0) {
            char ch = (digi - k) + '0';
            dfs(num + ch, n ,k);
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++) {
            dfs(to_string(i),n,k);
        }
        return ans;
    }
};