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
    
    int arr[] = {2,3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k=3;
    int p=-1;
    int ans[n-k+1];
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }

    if(p==-1) ans[0] = 1;
    else ans[0] = arr[p];

    int i = 1;
    int j = k;
    while(j<n) {
        if(p>=i) ans[i]= arr[p];
        else {
            p = -1;
            for(int x=i;x<=j;x++){
                if(arr[x] <0){
                    p=x;
                    break;
                }
            }
            if(p!= -1) ans[i] = arr[p];
            else ans[i] = 1;
        }
        i++;
        j++;
    }
    
    return 0;
}