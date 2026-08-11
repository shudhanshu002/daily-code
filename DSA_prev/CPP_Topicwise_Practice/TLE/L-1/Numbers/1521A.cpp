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

signed main()
{
    fast;

    ll t;
    cin>>t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO" << nl;
        }
        else if (b == 2)
        {
            cout << "YES" << nl;
            cout << a << ' ' << 3 * a << ' ' << 4 * a << nl;
        }
        else
        {
            cout << "YES" << nl;
            cout << a << ' ' << a * (b - 1) << ' ' << a * b << nl;
        }
    }

    return 0;
}