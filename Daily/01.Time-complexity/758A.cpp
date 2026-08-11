// https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n);
    int mx=0;
    for(int &x:a){cin>>x; mx=max(mx,x);}
    long long ans=0;
    for(int x:a) ans+=mx-x;
    cout<<ans;
}