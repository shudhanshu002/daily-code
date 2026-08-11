#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int x = a[0]*a[n-1];
        set<ll> divisors;

        for(ll i =2;i*i<=x;i++) {
            if(x%i == 0) {
                divisors.insert(i);
                if(i !=x/i) divisors.insert(x/i);
            }
        }

        vector<ll> divs(divisors.begin(),divisors.end());
        sort(divs.begin(),divs.end());

        if(divs == a) cout<< x<< endl;
        else cout<<'-1'<<endl;
    }
    
    return 0;
}