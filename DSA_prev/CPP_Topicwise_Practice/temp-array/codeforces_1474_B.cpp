// https://codeforces.com/problemset/problem/1474/B

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

bool is_prime(int x){
    if(x<2) return false;
    for(int i=2;1LL * i * i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

signed main() {
    fast;
    
    int t;
    cin>>t;
    while(t--) {
        int d;
        cin>>d;

        int p1 = d+1;
        while(!is_prime(p1)) ++p1;

        int p2 = p1+d;
        while(!is_prime(p2)) ++p2;

        ll result = 1LL * p1 * p2;
        cout<<result<<nl;
    }
    
    return 0;
}