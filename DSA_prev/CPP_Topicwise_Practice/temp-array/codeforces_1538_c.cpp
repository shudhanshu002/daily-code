// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main() {
//     fast;

//     int t;
//     cin >> t;

//     while (t--) {
//         int n, l, r;
//         cin >> n >> l >> r;

//         vector<int> v(n);
//         for (int i = 0; i < n; i++) cin >> v[i];

//         sort(v.begin(), v.end());

//         long long count = 0;

//         for(int i=0;i<n-1;i++){
//             int j=n-1;
//             while(i<j){
//                 int sum = v[i]+v[j];
//                 if(sum>=l && sum<=r){
//                     count++;
//                     j--;
//                 }else if(sum<l) break;
//                 else j--;
//             }
//         }

//         cout << count << '\n';
//     }

//     return 0;
// }


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
    
    auto fn = [&](vector<int> a,int mark){
        int i=;
        int j=0;
        int ans = 0;
        while(i<j){
            while(i<j && a[i] + a[j]>mark) j--;
            ans +=(j-i);
            i++;
        }
        return ans;
    }

    cout<< fn(a,r) - fn(a,l-1) <<endl;
    
    return 0;
}


