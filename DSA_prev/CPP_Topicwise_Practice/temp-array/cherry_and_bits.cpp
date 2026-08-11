// https://www.codechef.com/practice/course/5-star-and-above-problems/DIFF2500/problems/CENS20A

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
    
    int n , m;
    cin>>n>> m;

    vector<vector<int>> A(n,vector<int> (m));
    for(int i=0;i<n;i++){
        string row;
        cin>>row;
        for(int j=0;j<m;j++){
            A[i][j] = row[j]-'0';
        }
    }

    int q;
    cin>>q;

    vector<vector<int>> diff(n+2, vector<int>(m+2 , 0));

    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        --x1; --y1; --x2; --y2;

        diff[x1][y1] += 1;
        diff[x2+1][y2] -= 1;
        diff[x1][y2 + 1] -= 1;
        diff[x2 + 1][y2 + 1] += 1;
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            diff[i][j] += diff[i][j-1];
        }
    }

    for(int j=0; j<m; j++){
        for(int i=1;i<n;i++){
            diff[i][j] += diff[i-1][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            int flipped = diff[i][j] % 2;
            A[i][j] ^= flipped;
            cout<< A[i][j];
        }
    }
    
    return 0;
}