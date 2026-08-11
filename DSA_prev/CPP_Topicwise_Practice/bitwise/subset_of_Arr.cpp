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

    char arr[] = {'a', 'b', 'c'};
    int n = 3;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        cout << "{ ";
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                cout << arr[i] << " ";
        }
        cout << "}\n";
    }

    return 0;
}
