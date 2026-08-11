// https://www.hackerrank.com/challenges/summing-the-n-series/problem

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    const long long MOD=1000000007;
    while(t--){
        long long n; cin>>n;
        cout<<( (__int128)n*n % MOD )<<"\n";
    }
}