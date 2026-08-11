```cpp
class Solution {
public:
    int result = INT_MAX;
    int n;

    void solve(int idx, vector<int> &cookies, vector<int> &bucket, int k) {
        if(idx == cookies.size()) {
            int ans = *max_element(bucket.begin(), bucket.end());
            result = min(result , ans);
            return;
        }

        int candy = cookies[idx];
        for(int i=0;i<k;i++) {
            bucket[i] += candy;
            solve(idx+1, cookies, bucket, k);
            bucket[i] -= candy;
        }
    }


    int distributeCookies(vector<int>& cookies, int k) {
        n = cookies.size();

        vector<int> bucket(k);
        solve(0, cookies, bucket, k);

        return result;
    }
};
```