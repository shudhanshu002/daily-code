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

    // n & (n-1)  --> count number of set bit

    // n & -n  --> isolate the lowest set bit

    // n | (n-1) --> Gives a number with 1s where n and n-1 differ — up to the rightmost 1 bit

    // n = n & ~(1 << k); -->  Turn Off the kth Bit

    // n = n | (1 << k); -->  Turn On the kth Bit

    //  n= n ^ (1<<k) Toggle the kth Bit

    // (n > 0) && ((n & (n - 1)) == 0) --> for power of 2 check 

    // -x = ~x + 1 --> relate between number and it's negative in binary

    // x & (-x) --> Get the lowest set bit(LSB)



            return 0;
}