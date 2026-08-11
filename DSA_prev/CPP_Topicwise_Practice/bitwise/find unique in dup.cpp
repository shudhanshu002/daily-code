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

vector<int> findTwoUnique(vector<int> &arr) {
    int xorAll = 0;
    for(int num: arr) xorAll ^= num;

    int diffBit = xorAll & (-xorAll);

    int num1 = 0,num2 = 0;
    for(int num:arr){
        if(num & diffBit) num1 ^= num;
        else num2 ^= num;
    }

    return {num1,num2};
}

signed main() {
    fast;

    vector<int> arr = {2,3,3,4,5,6,4,6};
    
    vector<int> ans = findTwoUnique(arr);
    for(int i=0;i<2;i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}