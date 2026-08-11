#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> str;
        int num = 0;
        string curr = "";

        for(char ch: s){
            if(isdigit(ch)) num = num * 10 + (ch - '0');
            else if (ch == '[') {
                nums.push(num);
                str.push(curr);
                num = 0;
                curr = "";
            } else if(ch == ']') {
                int repeat = nums.top();
                nums.pop();

                string prev = str.top();
                str.pop();

                string temp = "";
                for(int i=0;i<repeat;i++) temp += curr;

                curr = prev + temp;
            } else {
                curr += ch;
            }
        }
        return curr;
    }
};