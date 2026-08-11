#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;
    typedef long long ll;

    void backtrack(string &num, int idx, ll currVal,ll last, int target,string expr) {
        if(idx == num.size()) {
            if(currVal == target) ans.push_back(expr);
            return;
        }

        for(int i=idx;i<num.size();i++) {
            if(i > idx && num[idx] == '0') break;

            string part = num.substr(idx, i-idx+1);
            ll val = stoll(part);

            if(idx == 0) {
                backtrack(num, i+1, val,val, target, part);
            } else {
                // add
                backtrack(num, i+1, currVal + val,val, target, expr + '+' + part);

                // sub
                backtrack(num, i+1, currVal - val,-val, target, expr + '-' + part);

                //multiply
                backtrack(num, i+1, currVal -last + last*val,last*val, target, expr + '*' + part);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        backtrack(num,0,0,0, target,"");
        return ans;
    }
};