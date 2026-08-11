#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef unordered_map<string, int> mp;

    string countOfAtoms(string formula) {
        int n = formula.size();
        stack<mp> st;
        st.push(mp());

        int i = 0;
        while(i< n) {
            if(formula[i] == '(') {
                st.push(mp());
                i++;
            } else if(formula[i] == ')') {
                mp curr = st.top();
                st.pop();
                i++;
                string multiplier;
                while(i<n && isdigit(formula[i])) {
                    multiplier += formula[i];
                    i++;
                }

                if(!multiplier.empty()) {
                    int mul = stoi(multiplier);
                    for(auto &[atom, count]: curr) {
                        curr[atom] = count * mul;
                    }
                }

                for(auto &[atom, count]: curr){
                    st.top()[atom] += count;
                }
            } else {
                string currAtom;
                currAtom += formula[i];
                i++;
                while(i<n && islower(formula[i])) {
                    currAtom += formula[i];
                    i++;
                }

                string currCount;
                while(i<n && isdigit(formula[i])) {
                    currCount += formula[i];
                    i++;
                }

                int count = currCount.empty() ? 1 : stoi(currCount);
                st.top()[currAtom] += count;
            }
        }

        map<string, int> sortedMap(begin(st.top()), end(st.top()));
        string result;
        for(auto &[atom, count]: sortedMap){
            result += atom;
            if(count>1){
                result += to_string(count);
            }
        }

        return result;
    }
};