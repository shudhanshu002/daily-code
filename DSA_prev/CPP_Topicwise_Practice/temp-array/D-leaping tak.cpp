// https://atcoder.jp/contests/abc179/tasks/abc179_d/

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
    
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> ranges(k);
    for(int i=0;i<k;i++){
        int l,r;
        cin>>l>>r;
        ranges[i] = {l,r};
    }

    vector<int> dp(n+1,0);
    vector<int> prefix(n+2, 0);

    dp[1] = 1;
    prefix[2] = 1;

    for(int i=2;i<=n;i++){
        for(auto [l,r]: ranges){
            int left = max(1,i-r);
            int right = i-l;

            if(right<left) continue;
            dp[i] = (dp[i] + (prefix[right + 1] - prefix[left] + mod) % mod) % mod;
        }
        prefix[i + 1] = (prefix[i] + dp[i]) % mod;
    }
    cout << dp[n] << '\n';
    return 0;
}