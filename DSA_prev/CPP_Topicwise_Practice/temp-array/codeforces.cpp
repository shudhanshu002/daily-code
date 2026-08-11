// https://codeforces.com/problemset/problem/230/B

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
#include <unordered_set>
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

const int MAX = 1000000;

vector<bool> is_prime(MAX + 1,true);
unordered_set<ll> t_primes;

void seive() {
    is_prime[0] = is_prime[1] = false;
    for(int i=2;i<=MAX;i++){
        if(is_prime[i]){
            for(int j = 2*i;j<=MAX; j+=i) {
                is_prime[j] = false;
            }
        }
    }

    for(int i=2;i<=MAX;i++){
        if(is_prime[i]) {
            ll sq = 1LL * i * i;
            t_primes.insert(sq);
        }
    }
}

signed main() {
    fast;
    
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        if (t_primes.count(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    
    return 0;
}