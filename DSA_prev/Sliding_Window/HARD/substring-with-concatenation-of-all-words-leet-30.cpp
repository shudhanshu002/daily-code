#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        if(words.empty()) return ans;

        int wordSize = words[0].size();
        int totalWords = words.size();
        int n = s.size();


        unordered_map<string, int> need;
        for(auto w: words) need[w]++;

        for(int i=0; i<wordSize; i++) {
            unordered_map<string,int> seen;
            int left = i;
            int count = 0;

            for(int j=i;j+wordSize <= n; j += wordSize) {
                string word = s.substr(j, wordSize);

                if(need.count(word)) {
                    seen[word]++;
                    count++;

                    // extra word
                    while(seen[word] > need[word]) {
                        string leftword = s.substr(left, wordSize);
                        seen[leftword]--;
                        left += wordSize;
                        count--;
                    }

                    if(count == totalWords) {
                        ans.push_back(left);
                    }
                }

                else {
                    seen.clear();
                    count = 0;
                    left = j + wordSize;
                }
            }
        }
        return ans;
    }
};