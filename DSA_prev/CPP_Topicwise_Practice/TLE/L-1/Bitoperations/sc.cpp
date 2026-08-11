#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <cmath>
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

signed main()
{
    fast;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (1 & (i >> j)) {
                cout << a[j] << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}

