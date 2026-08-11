```cpp
class Solution {
public:
    bool isPalindrome(string &s,int l,int r){
        while(l<r){
            if(s[l++] != s[r--]) return false;
        }
        return true;
    }

    void backtrack(string &s,int st,vector<string> &path,vector<vector<string>> &result){
        if(st==s.length()) {
            result.push_back(path);
            return;
        }

        for(int i=st;i<s.length();i++){
            if(isPalindrome(s,st,i)) {
                path.push_back(s.substr(st,i-st+1));
                backtrack(s,i+1,path,result);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;
        backtrack(s, 0, path, result);
        return result;
    }
};
```