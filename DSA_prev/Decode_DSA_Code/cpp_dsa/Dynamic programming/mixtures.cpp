
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

ll dp[105][105];
ll g(vector<int> &colors,int i,int j) {
    ll result = 0;
    for(int m = i;m<=j;m++) {
        result = (result % 100 + colors[m]%100) %100;
    }
    return result;
}


ll f(vector<int> &colors,int i,int j) {
    if(i==j) return dp[i][j]=0;
    if(dp[i][j]!= -1) return dp[i][j];
    ll result = INT_MAX;
    for(int k=i;k<=j-1;k++) {
        result = min(result, f(colors, i , k) + f(colors,k+1,j) + g(colors,i,k)*g(colors,k+1,j));
    }
    return dp[i][j] = result;
}

ll fbu(vector<int> &colors) {
    memset(dp,0,sizeof dp);
    int n = colors.size();
    for(int len=2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j = i + len - 1;
            ll result = INT_MAX;
            for(int k = i;k<=j-1;k++){
                result = min(result,dp[i][k] + dp[k+1][j] + g(colors, i, k)*g(colors, k+1, j))
            }
            dp[i][j] = result;
        }
    }
    return dp[0][n-1];
}


signed main() {
    fast;
    
    int n;
    while(cin>>n) {
        vector<int> colors;
        for(int i = 0; i < n ; i++) {
            int x;
            cin>>x;
            colors.push_back(x);
        }
        memset(dp, -1, sizeof dp);
        // cout<<f(colors, 0, colors.size() - 1)<<"\n";
        cout<<fbu(colors)<<"\n";

        colors.clear();
    }

    return 0;
    
    
    return 0;
}