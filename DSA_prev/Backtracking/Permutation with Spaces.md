```cpp
class Solution {
public:
    vector<string> re;

    void generate(string &s, int idx, string curr, int n) {
        // add current character
        curr.push_back(s[idx]);

        // base case: last character added
        if (idx == n - 1) {
            re.push_back(curr);
            return;
        }

        // choice 1: add space
        generate(s, idx + 1, curr + " ", n);

        // choice 2: no space
        generate(s, idx + 1, curr, n);
    }

    vector<string> permutation(string s) {
        re.clear();
        generate(s, 0, "", s.length());
        return re;
    }
};
```