// Count of numbers (x) smaller than or equal to n such that n+x = n^x:d

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

int countVal(int n) {
    int unset_bit = 0
    while(n){
        if((n&1) == 0)
            unset_bit++;
        n=n>>1;
    }
}

signed main() {
    fast;
    
    int n = 15;
    cout << countVal(n);
    
    return 0;
}