#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> dp;
int f(int i,int j,vector<int> &arr) {
    if(i==j or i+1 ==j ) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k = i+1 ;k<j; k++) {
        ans = min(ans,f(i,k,arr) + f(k,j,arr) + arr[i]+arr[k]+arr[j]);
    }
    return dp[i][j] =ans;

}


int main()
{
    itn n;
    cin>>n;
    vector<int>v(n) ;
    for(int i = 0;i<n;i++) cin>>v[i];
    dp.clear();
    dp.resize(10005,vector<int> (1000,-1));
    cout<<f(0,n-1,v)<<endl;
}
