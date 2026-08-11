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

int find(vector<int> &parent, int x) {
    return parent[x] = (parent[x] == x) ? x: find(parent, parent[x]);
}

void Union(vector<int> &parent, vector<int> &rank,int a, int b){
    a = find(parent, a);
    b = find(parent, b);
    if(a==b) return;
    if(rank[a] >= rank[b]) {
        rank[a]++;
        parent[b] = a;
    }else {
        rank[b]++;
        parent[a] = b;
    }
}

signed main() {
    fast;
    
    int n, m;
    cin>>n>>m;

    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    for(int i=0;i<=n;i++) parent[i] = i;

    while(m--) {
        string str;
        cin>>str;

        if(str == "union") {
            int x,y;
            cin>>x>>y;
            Union(parent,rank,x,y);
        } else {
            int x;
            cin>>x;
            cout<<find(parent,x)<<"\n";
        }
    }
    
    return 0;
}