#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

signed main() {
    fast;
    
    int n;
    cin>>n;

    vector<vector<int>> dp(n,vector<int> (3,0));

    int a,b,c;
    cin>>a>>b>>c;

    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    for(int i=1;i<n;i++) {
        cin>>a>>b>>c;

        dp[i][0] = a + max(dp[i-1][1],dp[i-1][2]);
        dp[i][0] = b + max(dp[i-1][0],dp[i-1][2]);
        dp[i][0] = c + max(dp[i-1][0],dp[i-1][1]);
    }

    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    
    return 0;
}