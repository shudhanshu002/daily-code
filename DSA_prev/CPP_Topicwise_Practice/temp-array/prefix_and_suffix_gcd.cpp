// A. Row GCD
// time limit per test2 seconds
// memory limit per test512 megabytes
// You are given two positive integer sequences a1,…,an
//  and b1,…,bm
// . For each j=1,…,m
//  find the greatest common divisor of a1+bj,…,an+bj
// .

// Input
// The first line contains two integers n
//  and m
//  (1≤n,m≤2⋅105
// ).

// The second line contains n
//  integers a1,…,an
//  (1≤ai≤1018)
// .

// The third line contains m
//  integers b1,…,bm
//  (1≤bj≤1018)
// .

// Output
// Print m
//  integers. The j
// -th of them should be equal to GCD(a1+bj,…,an+bj)
// .

// Example
// InputCopy
// 4 4
// 1 25 121 169
// 1 2 7 23
// OutputCopy
// 2 3 8 24


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
#define nl '\n'
static ll mod = 1e9 + 7;

signed main() {
    fast;
    
    int n,q;
    cin>> n;

    vector<int> a(n+2); // 1-based indexing
    for(int i = 1;i <=n; i++) cin>>a[i];

    vector<int> preGcd(n+2,0);
    vector<int> suffGcd(n+2,0);
    
    for(int i=1;i<=n;i++){
        preGcd[i] = gcd(preGcd[i-1],a[i]);
    }

    for(int i=n;i>=0;i--){
        suffGcd[i] = gcd(suffGcd[i+1],a[i]);
    }

    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int result = gcd(preGcd[l-1],suffGcd[r+1]);
        cout<<result;
    }
    
    return 0;
}