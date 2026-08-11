```cpp
class Solution {
public:
    int m;
    int result = INT_MIN;

    void solve(int idx,int count,int n,vector<vector<int>> &requests, vector<int> &degreeMap) {
        if(idx == m) {
            int allZero = true;
            for(int &x: degreeMap) {
                if(x!=0) {
                    allZero = false;
                    break;
                }
            }

            if(allZero) result = max(result, count);

            return;
        }

        int from = requests[idx][0];
        int to = requests[idx][1];

        degreeMap[from]--;
        degreeMap[to]++;
        solve(idx+1, count+1,n,requests, degreeMap);

        degreeMap[from]++;
        degreeMap[to]--;
        solve(idx+1, count, n, requests, degreeMap);
    }

    int maximumRequests(int n, vector<vector<int>>& requests) {
        m = requests.size();

        vector<int> degreeMap(n,0);
        solve(0,0,n,requests,degreeMap);

        return result;
    }
};
```