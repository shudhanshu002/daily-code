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


int computeXor(int n) {
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    return 0;
}

signed main() {
    fast;
    int n;
    cin>>n;
    cout<< computeXor(n);
    
    
    return 0;
}