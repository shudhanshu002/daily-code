#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long
#define mod 1000000007
using namespace std;

vector<long long>dp(1000005,-1);

ll f(int x) {
    if(x==0) return 1;
    if(dp[x]!= -1) return dp[x];
    ll sum = 0;
    for(int i=1;i<=6;i++){
        if(x-i < 0) break;
        sum = (sum % mod +f(x-i)%mod)%mod;
    }
    return dp[x] = sum%mod;
}

ll fbu(int n) {
    dp[0] =1;

    for(int k =1; k<=n ;k++) {
        ll sum =0;
        for(int i =1;i <=6 ;i++) {
            if(k-i < 0) break;
            sum = (sum%mod + dp[k-i]%mod) %mod;
        }
        dp[k] =sum%mod;
    }
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<fbu(n);
}
