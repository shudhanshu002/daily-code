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

vector<int> dp;
int f(int n) {
    if(n==0 or n==1) return 1;
    if(n==2) return 2;
    if(dp[n]!=-1) return dp[n];
    int sum = 0;
    for(int k = 1;k<=n; k++){
        sum += f(k-1)*f(n-k);
    }
    return dp[n] = sum;
}

signed main() {
    fast;
    
    dp.clear();
    dp.resize(30, -1);
    return f(n);
    
    return 0;
}