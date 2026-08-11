#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }

    int maxVowels(string s, int k) {
        int n = s.length();
        int i=0;
        int count = 0, maxCount = 0;
        for(int j=0;j<k;j++) {
            if(isVowel(s[j])) count++;
        }
        maxCount = count;
        cout<< maxCount<< "  1"<<endl;

        for(int j=k; j<n;j++) {
            if(isVowel(s[j])) count++;
            if(isVowel(s[i++])) count--;
            maxCount = max(maxCount, count);
            cout<<"maxCount" << maxCount<<endl;
        }

        return maxCount;
    }
};