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

pair<int, pair<int,int>> maxSubarrayWithIndices(vector<int> & nums) {
    int curr = nums[0], best = nums[0];
    int start = 0, end = 0, s = 0;

    for(int i=1;i<nums.size();i++){
        if(nums[i]>curr + nums[i]) {
            curr = nums[i];
            s = i;
        } else {
            curr += nums[i];
        }

        if(curr>best) {
            best = curr;
            start = s;
            end = i;
        }
    }

    return {best, {start, end}};
}

signed main() {
    fast;
    
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    auto result = maxSubarrayWithIndices(nums);
    
    int bestSum = result.first;
    int l = result.second.first;
    int r = result.second.second;

    cout << "Max Sum = " << bestSum << "\n";
    cout << "Subarray: ";
    for (int i = l; i <= r; i++) cout << nums[i] << " ";
    
    return 0;
}