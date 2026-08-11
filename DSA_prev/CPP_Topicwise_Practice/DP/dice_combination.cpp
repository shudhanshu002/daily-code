#include <iostream>
#include <vector>
#define mod 1000000007
#define ll long long int
using namespace std;

vector<ll> dp(1000005, -1);
ll f(int n) {
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];

    ll ways = 0;
    for (int i = 1; i <= 6; i++) {
        if (n - i < 0) break;
        ways = (ways + f(n - i)) % mod;
    }

    return dp[n] = ways;
}


ll fbu(int n) {
    dp[0] = 1;
    
    for(int k = 1; k<= n; k++) {
        ll ways = 0;
        for(int i = 1; i <=6 ; i++) {
            if(k - i < 0) break;
            ways = (ways % mod + dp[k-i] % mod ) % mod; 
        }
        dp[k] = ways % mod;
    }

    return dp[n];
}