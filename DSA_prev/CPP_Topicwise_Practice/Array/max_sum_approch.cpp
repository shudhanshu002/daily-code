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

int maxArray(vector < int> & nums){
    int curr = nums[0], best = nums[0];

    for(int i=0;i<nums.size();i++){
        curr = max(nums[i], curr+nums[i]);
        best = max(best, curr);
    }
    return best;
}

int maxSubArray(vector<int>& nums) {
    long long prefix = 0;
    long long minPrefix = 0;
    long long best = LLONG_MIN;

    for (int x : nums) {
        prefix += x;
        best = max(best, prefix - minPrefix);
        minPrefix = min(minPrefix, prefix);
    }
    return (int)best;
}



signed main() {
    fast;
    
    
    
    return 0;
}