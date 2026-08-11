## method -1


```cpp
// tc- (n!)
class Solution {
public:
    int count = 0;
    vector<int> perm;
    vector<bool> usedPos;

    void backtrack(int num, int n) {
        if(num > n) {
            count++;
            return;
        }

        for(int pos=1;pos <= n; pos++) {
            if(!usedPos[pos] && (num % pos == 0 || pos%num ==0)) {
                usedPos[pos] = true;
                perm[pos] = num;
                backtrack(num+1,n);
                usedPos[pos] = false;
            }
        }
    }

    int countArrangement(int n) {
        perm.assign(n+1,0);
        usedPos.assign(n+1, false);
        backtrack(1,n);
        return count;
    }
};
```

```cpp
class Solution {
public:
    int n;
    vector<int> dp;

    int solve(int mask) {
        if (mask == (1 << n) - 1)
            return 1;

        if (dp[mask] != -1)
            return dp[mask];

        int pos = __builtin_popcount(mask) + 1;
        int ways = 0;

        for (int num = 1; num <= n; num++) {
            if (!(mask & (1 << (num - 1))) &&
                (num % pos == 0 || pos % num == 0)) {
                ways += solve(mask | (1 << (num - 1)));
            }
        }

        return dp[mask] = ways;
    }

    int countArrangement(int N) {
        n = N;
        dp.assign(1 << n, -1);
        return solve(0);
    }
};
```