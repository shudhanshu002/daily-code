#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
using namespace std;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define sort(v) sort(v.begin(), v.end())
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int, int>
#define endl '\n'
static ll mod = 1e9 + 7;

signed main()
{
    fast;

    ll n;
    int k;
    cin >> n >> k;

    vector<ll> fac;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            fac.pb(i);
            n /= i;
        }
    }

    if(n>1) {
        fac.pb(n);
    }

    if((int)fac.size() < k) {
        cout<< "-1"<<endl;
        return 0;
    }

    for(int i = 0;i<k-1;i++) {
        cout<<fac[i]<<" ";
    }

    ll last = 1;
    for(int i=k-1;i<(int)fac.size();i++) {
        last *= fac[i];
    }

    cout<<last<<endl;

    return 0;
}