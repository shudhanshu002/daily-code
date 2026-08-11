// https://cses.fi/problemset/task/1641

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
// #define sort(v) sort(v.begin(),v.end())
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

signed main() {
    fast;
    
    int n;
    long long x;
    cin>> n >> x;

    vector<pair<ll,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        int l = i+1, r = n-1;
        while(l<r) {
            ll sum = a[i].first + a[l].first + a[r].first;
            if(sum == x){
                cout<< a[i].second<<" "<<a[l].second<<" "<<a[r].second<<nl;
                return 0;
            } else if(sum < x){
                l++;
            }else r--;
        }
    }

    cout<<"IMPOSSIBLE"<<nl;
    
    return 0;
}