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

bool canAllocate(vector<int> nums,int m,int mPages){
    int student =1;
    int sum = 0;

    for(int pages:nums) {
        if(pages>mPages) return false;

        if(sum+pages > mPages) {
            student++;
            sum = pages;

            if(student>m) return false;
        }else sum+=pages;
    }
    return true;
}

int findPages(vector<int> &nums,int m) {
    int n=nums.size();
    if(m>n) return -1;

    int low = *max_element(nums.begin(),nums.end());
    int hi = accumulate(nums.begin(),nums.end(),0);
    int ans=-1;

    while(low<=hi) {
        int mid = (low+hi)/2;
        if(canAllocate(nums,m,mid)){
            ans = mid;
            hi = mid-1;
        } else {
            low =mid+1;
        }
    }
    return ans;
}

signed main() {
    fast;
    
    
    
    return 0;
}