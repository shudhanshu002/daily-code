// https://codeforces.com/problemset/problem/797/A

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
    
    int n,k;
    cin>>n>>k;
    vector<int> factors;


    for(int i=2;i*i<=n;i++){
        while(n%i == 0){
            factors.push_back(i);
            n/=i;
        }
    }

    if(n>1) factors.push_back(n);

     if ((int)factors.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> result;
    int product = 1;
    for (int i = 0; i < (int)factors.size(); ++i) {
        if (i < (int)factors.size() - k + 1) {
            product *= factors[i];
        } else {
            result.push_back(factors[i]);
        }
    }
    result.insert(result.begin(), product); // Insert the merged product at the start

    // Step 4: Output
    for (int val : result) cout << val << " ";
    cout << endl;
    
    return 0;
}