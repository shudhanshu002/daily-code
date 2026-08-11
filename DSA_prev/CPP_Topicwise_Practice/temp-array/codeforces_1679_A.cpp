// https://codeforces.com/problemset/problem/1679/A

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

signed main() {
    fast;
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        if(n%2!=0 || n<4){
            cout<<-1<<endl;
            continue;
        }

        ll min_buses = (n+5)/6;
        ll max_buses = n/4;

        cout<<min_buses<<" "<< max_buses;
    }
    
    return 0;
}