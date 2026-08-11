// https://codeforces.com/problemset/problem/1496/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; string s;
        cin>>n>>k>>s;
        bool ok=(2*k<n);
        for(int i=0;i<k && ok;i++)
            if(s[i]!=s[n-1-i]) ok=false;
        cout<<(ok?"YES":"NO")<<"\n";
    }
}