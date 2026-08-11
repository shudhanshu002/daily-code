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

int setBitNumber(int n) {
    n |= n>>1;
    n |= n>>2;
    n |= n>>4;
    n |= n>>8;
    n |= n>>16;
    n += 1;
    return (n>>1);
}

signed main() {
    fast;
    cout<<setBitNumber(273);
    
    
    return 0;
}