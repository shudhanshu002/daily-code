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
    
    int n,m,k;
    cin>>n>>m>>k;

    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<tuple<int,int,long long>> ops(m);
    for(int i=0;i<m;i++){
        int l,r;
        ll d;
        cin>>l>>r>>d;
        ops[i] = {l-1,r-1,d};
    }
    

    vector<ll> op_count(m+1,0);

    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        op_count[x-1]++;
        op_count[y]--;
    } 

    // prefix sum op_count
    for(int i=1;i<m;i++){
        op_count[i] += op_count[i-1];
    }   

    vector<ll> diff(n+1,0);
    for(int i=0;i<m;i++){
        auto [l,r,d] = ops[i];
        ll times = op_count[i];
        diff[l] += d*times;
        diff[r+1] -= d*times;
    }

    for (int i = 1; i < n; ++i) {
        diff[i] += diff[i - 1];
    }

    for (int i = 0; i < n; ++i) {
        a[i] += diff[i];
        cout << a[i] << " ";
    }

    cout << '\n';
    return 0;
}