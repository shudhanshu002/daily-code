// https://codeforces.com/problemset/problem/1499/B

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int first11=-1,last00=-1;

        for(int i=0;i+1<s.size();i++){
            if(s[i]=='1' && s[i+1]=='1'){
                first11=i;
                break;
            }
        }

        for(int i=(int)s.size()-2;i>=0;i--){
            if(s[i]=='0' && s[i+1]=='0'){
                last00=i;
                break;
            }
        }

        if(first11!=-1 && last00!=-1 && first11<last00)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}