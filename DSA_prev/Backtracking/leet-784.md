```cpp
class Solution {
public:
    vector<string> re;

    void generate(string &s,int idx) {
        if(idx == s.length()) {
            re.push_back(s);
            return;
        }

        // isnum
        bool t = isdigit(s[idx]);

        if(t) {
            // num hai tho aise hi lelo
            generate(s, idx+1);
        } else {
            // upper
            char ch = toupper(s[idx]);
            s[idx] = ch;
            generate(s, idx+1);
            // lower
            ch = tolower(ch);
            s[idx] = ch;
            generate(s, idx+1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        generate(s, 0);
        return re;
    }
};
```