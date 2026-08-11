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

vector<int> getDivisors(int n) {
    vector<int> divisors;
    for(int k=1;k*k<=n ;k++) {
        if(n%k==0) {
            divisors.pb(k);
            if(n/k != k) divisors.pb(n/k);
        }
    }
    return divisors;
}

signed main() {
    fast;
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int global_and = (1<<30)-1;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            global_and &= a[i];
        }

        int count_equal = 0;
        for(int i=0;i<n;i++){
            if(a[i] == global_and) count_equal++;
        }

        vector<int> result = getDivisors(count_equal);
        for(int k : result) {
            cout<< k << " ";
        }
        cout<< nl;
    }
    
    return 0;
}