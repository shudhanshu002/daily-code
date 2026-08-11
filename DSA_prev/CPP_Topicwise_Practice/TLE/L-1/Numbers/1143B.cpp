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
#define endl '\n'
static ll mod = 1e9 + 7;

ll productOfDigits(ll num) {
    ll prod = 1;
    while(num > 0) {
        prod *= num%10;
        num/=10;
    }
    return prod;
}

signed main() {
    fast;
    ll s;
    cin>>s;

    string n = to_string(s);

    ll ans = productOfDigits(s);

    for(int i=0;i<n.size();i++) {
        if(n[i] == '0') continue;

        string temp = n;
        temp[i] = (temp[i]-'0'-1) +'0';

        for(int j = i+1 ;j <(int)temp.size();j++) {
            temp[j] = '9';
        }

        ll candidate = stoll(temp);
        

        ans = max(ans,productOfDigits(candidate));
    }

    cout<<ans<<endl;
    
    
    return 0;
}