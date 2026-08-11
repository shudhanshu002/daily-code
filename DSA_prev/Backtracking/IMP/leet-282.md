```cpp
class Solution {
public:
    vector<string> ans;

    void backtrack(string &num, int idx,long long currVal,long long last, string expr, int target) {
        if(idx == num.size()) {
            if(currVal == target) ans.push_back(expr);
            return;
        }

        for(int i=idx; i<num.size(); i++) {
            if(i > idx && num[idx] == '0') break;

            string part = num.substr(idx, i - idx + 1);
            long long val = stoll(part);

            if(idx == 0) {
                backtrack(num, i+1, val,val,part,target);
            } else {
                backtrack(num, i+1, currVal + val, val, expr + "+" + part, target);   // addition case

                backtrack(num, i+1, currVal - val, -val, expr + "-" + part, target); // subtraction case

                // special case to see when multiplicationpredcedence matter so if last addtion of something then remove and fix
                // like 1+2*3
                // so if last was 2 then sub r then add 2*3 otherwise it will be (1+2)*3 which will be wrong
                backtrack(num, i+1, currVal - last + last*val, last*val, expr + "*" + part, target); // multip[lication]
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        backtrack(num,0,0,0,"", target);
        return ans;
    }
};
```