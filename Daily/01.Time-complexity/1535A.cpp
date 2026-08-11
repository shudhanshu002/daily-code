// https://codeforces.com/problemset/problem/1535/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
        vector<int> v={s1,s2,s3,s4};
        vector<int> a=v; sort(a.begin(),a.end());
        int mx1=max(s1,s2), mx2=max(s3,s4);
        cout<<( (mx1==a[3] && mx2==a[2]) || (mx2==a[3] && mx1==a[2]) ? "YES":"NO")<<"\n";
    }
}