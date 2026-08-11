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
#define endl '\n'
static ll mod = 1e9 + 7;

signed main() {
    fast;
    
    ll n,m;
    cin>>n>>m;

    vector<ll> a(5,0),b(5,0);

    for(int i=1;i<=n;i++) {
        a[i%5]++;
    }

    for(int i=1;i<=m;i++) {
        b[i%5]++;
    }

    ll ans = 0;
    ans += a[0]*b[0];
    ans += a[1]*b[4];
    ans += a[2]*b[3];
    ans += a[3]*b[2];
    ans += a[4]*b[1];
    cout<<ans<<endl;
    
    return 0;
}