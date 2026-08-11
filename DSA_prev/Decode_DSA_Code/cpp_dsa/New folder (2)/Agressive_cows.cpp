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

int canPlace(vector<int> &stalls, int k, int mindist){
    int count = 1;
    int lastCow = stalls[0];

    for(int i=0;i<stalls.size();i++) {
        if(stalls[i]-lastCow >= mindist) {
            count++;
            lastCow = stalls[i];
        }
    }
    return count>=k;
}

int aggressiveCows(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    int low=1,high=arr.back()-arr[0];
    int ans=0;

    while(low<=high) {
        int mid =(low+high)/2;
        if(canPlace(arr,k,mid)) {
            ans = mid;
            low = mid+1;
        }else high = mid-1;
    }
    return ans;

}