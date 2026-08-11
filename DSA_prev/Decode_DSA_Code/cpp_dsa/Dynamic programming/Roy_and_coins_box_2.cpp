
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
    
    int n;
    cin>>n;
    vector<int> f(n+10, 0);
    int m;
    cin>>m;
    for(int i = 0; i < m; i++) {
        int L, R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }

    for(int i=1;i<f.size();i++) {
        f[i] = f[i] + f[i-1];
    }

    vector<int> c(10000005, 0);
    for(int i=0;i<=n;i++) {
        int coins = f[i];
        c[coins]++;
    }

    for(int i=c.size()-2;i>=0;i--) {
        c[i] = c[i]+ c[i+1];
    }

    int q;
    while(q--) {
        int num;
        cin>>num;
        cout<<c[num]<<nl;
    }
    
    return 0;
}