// https://codeforces.com/problemset/problem/1512/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].push_back(i+1);
        }
        for(auto &p:mp){
            if(p.second.size()==1){
                cout<<p.second[0]<<"\n";
                break;
            }
        }
    }
}