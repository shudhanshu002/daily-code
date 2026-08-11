#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int dp[101][101];
    
    int solve(string &s1, string &s2, int m, int n){
        if(m==0 || n==0) return m + n; // if one end attack other as whole

        if(dp[m][n] != -1) return dp[m][n];

        if(s1[m-1] == s2[n-1]) {
            return dp[m][n] = 1 + solve(s1,s2,m-1,n-1);
        } else {
            return dp[m][n] = 1 + min(solve(s1,s2,m-1,n), solve(s1,s2,m,n-1));
        }

        return 0;
    }

    int shortestCommonSupersubsequence(string s1,string s2,int m,int n) {
        memset(dp, -1, sizeof dp);
        return solve(s1,s2,m,n);
    }
};