#include <bits/stdc++.h>
using namespace std;

vector<int> coins;
vector<int> dp(10000006,-1);

int f(int x){
    if(x==0) return 0;
    if(dp[x]!=-1) return dp[x];
    int result = INT_MAX;
    for(int i=0;i<coins.size();i++) {
        if(x-coins[i]<0) continue;
        result = min(result,f(x-coins[i]));
    }
    if(result == INT_MAX) return dp[x] =INT_MAX;
    return dp[x] = 1 + result;
}

int fbu(int x){
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int coin:coins) {
            if(i-coin>=0 ){
                dp[i] = min(dp[i],1+dp[i-coin]);
            }
        }
    }

    return (dp[x]==INT_MAX) return -1:dp[x];
}


int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++) {
        int num;
        cin>>num;
        coins.push_back(num);
    }
    int ans=f(x);
    if(ans==INT_MAX) {
        cout<<-1;
    }
    else cout<<ans;
}
