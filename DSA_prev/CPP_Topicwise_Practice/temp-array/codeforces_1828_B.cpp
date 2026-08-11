// https://codeforces.com/problemset/problem/1828/B

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

int gcd(int a ,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

signed main() {
    fast;
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

        int g=0;
        for(int i=0;i<n;i++){
            if(p[i]!= i+1)
                g = gcd(g,abs(p[i]-i-1));
        }
        cout<< g <<nl;
    }
    
    return 0;
}