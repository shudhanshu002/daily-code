#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
#include <unordered_map>
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

int longestSubarrayWithTarget(vector<int> &arr,int k) {
    unordered_map<int,int> presum;
    int sum=0,maxLen=0;

    for(int i=0;i<arr.size();i++) {
        sum += arr[i];

        if(sum==k) maxLen = i+1;

        if(presum.find(sum-k)!=presum.end()) {
            maxLen = max(maxLen, i-presum[sum-k]);
        }

        if(presum.find(sum)!=presum.end()) {
            presum[sum] = i;
        }
    }

    return maxLen;
}

signed main() {
    fast;
    
    
    
    return 0;
}