// https://codeforces.com/problemset/problem/1633/C

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;

        bool win=false;
        for(long long i=0;i<=k;i++){
            long long atk=dc+i*w;
            long long hp=hc+(k-i)*a;

            long long t1=(hm+atk-1)/atk;
            long long t2=(hp+dm-1)/dm;

            if(t1<=t2){ win=true; break; }
        }
        cout<<(win?"YES":"NO")<<"\n";
    }
}