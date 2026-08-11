#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long dp[46][2];

    long long generate(int n, int len, int last) {
        if (len == n) return 1;

        if (dp[len][last] != -1)
            return dp[len][last];

        long long ways = 0;
        ways += generate(n, len + 1, 0);
        
        if (last == 0) {
            ways += generate(n, len + 1, 1);
        }

        return dp[len][last] = ways;
    }

    long long countStrings(int n) {
        memset(dp, -1, sizeof(dp));
        return generate(n, 0, 0);
    }
};
