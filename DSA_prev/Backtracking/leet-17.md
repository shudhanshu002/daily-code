```cpp
class Solution {
public:
    vector<string> ans;
    vector<string> numToChar = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };

    void generate(string &digits, int i, string t) {
        if(i == digits.length()) {
            ans.push_back(t);
            return;
        }

        string letters = numToChar[digits[i] - '0'];

        for(int k = 0;k< letters.length(); k++) {
            t.push_back(letters[k]);
            generate(digits,i+1, t);
            t.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        string t = "";
        generate(digits , 0,t);
        return ans;
    }
};
```