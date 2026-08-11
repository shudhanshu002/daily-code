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

void insertionSort(vector<int> &arr, int n){
    for(int i=1;i<n;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j]>arr[j-1]) break;
            if(arr[j] < arr[j-1]) {
                swap(arr[j] , arr[j-1]);
            }
        }
    }
}

signed main() {
    fast;
    
    
    
    return 0;
}