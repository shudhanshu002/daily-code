#include <bits/stdc++.h>
using namespace std;


#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        vector<int> ans;
        queue<int> dq;
        
        for(int i=0;i<arr.size();i++) {
            if(!dq.empty() && dq.front() <= i-k) dq.pop();
            
            if(arr[i] < 0) dq.push(i);
            
            if(i >=k -1) {
                if(!dq.empty()) ans.push_back(arr[dq.front()]);
                else ans.push_back(0);
            }
        }

        return ans;
    }
};
