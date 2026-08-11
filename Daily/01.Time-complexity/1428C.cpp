// https://codeforces.com/problemset/problem/1428/C

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int b=0;
        for(char c:s){
            if(c=='A'){
                if(b) b--;
                else b++;
            }else b++;
        }
        cout<<b<<"\n";
    }
}