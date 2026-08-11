#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> get_digits(int n)
{
    vector<int> result;
    while(n>0) {
        if(n%10!= 0) {
            result.push_back(n%10);
        }
        n/=10;
    }
    return result;
}

vector<int> dp;

int f(int n)
{
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!= -1) return dp[n];
    vector<int> d=get_digits(n);

    int result = INT_MAX;
    for(int i = 0;i<d.size();i++) {
        result = min(result ,f(n-d[i]));
    }
    return dp[n] = 1+result;
}

int fbu(int nums)
{
    dp[0] =0;
    for(int i=1;i<=9;i++) dp[i] = 1;
    for(int n=10;n<=nums;n++) {
        vector<int> d= get_digits(n);
        int result = INT_MAX;
        for(int i=0;i<d.size();i++) {
            if (n - d[i] >= 0) { // Ensure valid index
                result = min(result, dp[n - d[i]]);
            }
        }
        dp[n] = 1+result;
    }
    return dp[nums];
}

int main()
{
    int n;
    cin>>n;
    dp.resize(10000005, -1);
    cout<<fbu(n)<<endl;
    return 0;
}
