#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string temp = "";
        int open = 0;

        for(char ch : s) {
            if(ch == '(') {
                open++;
                if(open != 1) temp.push_back('(');
            }
            else {
                open--;
                if(open != 0) temp.push_back(')');
            }
        }

        return temp;
    }
};