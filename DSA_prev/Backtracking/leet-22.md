```cpp
class Solution {
public:
    vector<string> re;

    void generate(int n, int open, int close, string &t) {
        if (t.length() == 2 * n) {
            re.push_back(t);
            return;
        }

        if (open < n) {
            t.push_back('(');
            generate(n, open + 1, close, t);
            t.pop_back();  
        }

        if (close < open) {
            t.push_back(')');
            generate(n, open, close + 1, t);
            t.pop_back();  
        }
    }

    vector<string> generateParenthesis(int n) {
        string t;
        generate(n, 0, 0, t);
        return re;
    }
};
```