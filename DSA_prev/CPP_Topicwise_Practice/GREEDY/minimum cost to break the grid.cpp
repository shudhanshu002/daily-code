#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
#include <climits>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

bool cmp(int x,int y){
    return x > y;
}

ll minCostToBreakTheGrid(int n,int m,vector<ll> &vertical,vector<ll> &horizontal) {
    sort(vertical.begin() , vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);

    int hz = 1;
    int vr = 1;
    int h = 0, v = 0;
    int ans = 0;

    while(h < horizontal.size() && v < vertical.size()){
        if(vertical[v] >= horizontal[h]) {
            ans += vertical[v] * vr;
            hz++;
            v++;
        } else {
            ans += horizontal[h] * hz;
            vr++;
            h++;
        }
    }

    while(h < horizontal.size()) {
        ans += horizontal[h] * hz;
        vr++;
        h++;
    }

    while(v < vertical.size()) {
        ans += vertical[v] * vr;
        hz++;
        v++;
    }

    return ans;
}

signed main() {
    fast;

    int n, m;
    cin >> m >> n;
    vector<ll> horizontal, vertical;
    for (int i = 0; i < m - 1; i++)
    {
        int x;
        cin >> x;
        vertical.push_back(x);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        horizontal.push_back(x);
    }

    cout << minCostToBreakTheGrid(n, m, horizontal, vertical);

    return 0;
}