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
    
    int arr[] = {4,6,1,2,5,3};

    int n=6;
    int i=0;
    while(i<n) {
        int correctIdx = arr[i] - 1;
        if(i == correctIdx) i++;
        else swap(arr[i] , arr[correctIdx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}