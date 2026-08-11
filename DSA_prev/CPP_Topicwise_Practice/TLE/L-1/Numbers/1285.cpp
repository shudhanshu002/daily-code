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
#define nl '\n'
static ll mod = 1e9 + 7;

ll gcd(ll a,ll b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

signed main()
{
    fast;

    ll x;
    cin >> x;
    if (x == 1)
    {
        cout << 1 << ' ' << 1 << nl;
        return 0;
    }
    vector<ll> fac;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            fac.pb(i);
            if (x / i != i)
            {
                fac.pb(x / i);
            }
        }
    }
    sort(fac);

    int n = fac.size();

    if (n % 2 != 0){
        int t = (n/2)-1;
        while(t>=0) {
            if(lcm(fac[t], x/fac[t])== x) {
                cout << fac[t] << ' ' << x/fac[t] << nl;
                break;
            }
            t--;
        }
    }
    else{
        int t = (n/2)-1;
        while(t>=0) {
            if(lcm(fac[t], x/fac[t])== x) {
                cout << fac[t] << ' ' << x/fac[t] << nl;
                break;
            }
            t--;
        }
    }

    return 0;
}