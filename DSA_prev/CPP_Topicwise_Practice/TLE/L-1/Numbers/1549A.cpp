#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define ip INT_MAX
#define in INT-MIN
#define pb push_back
#define pp pair<int,int>
#define endl '\n'
static ll mod = 1e9 + 7;

signed main() {
    fast;
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        if(n%2==0) cout<<"2 "<<n<<endl;
        else cout<<"2 "<<n-1<<endl;
    }
    
    return 0;
}