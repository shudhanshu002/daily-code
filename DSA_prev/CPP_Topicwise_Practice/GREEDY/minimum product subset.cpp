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

int minProduct(vector<int> &arr) {
    int cn = 0, cz = 0, cp = 0;
    int prod_pos = 1;
    int prod_neg = 1;
    int largestNegative = INT_MIN;
    int minPositive = INT_MAX;
    for(int i=0;i<arr.size(); i++) {
        if(arr[i]<0) {
            cn++;
            prod_neg *= arr[i];
            largestNegative = max(largestNegative, arr[i]);
        }
        else if(arr[i] == 0) cz++;
        else {
            cp++;
            prod_pos *= arr[i];
            minPositive = min(minPositive, arr[i]);
        }
    }


    if(cn == 0) {
        if(cn > 0) return 0;
        else return minPositive;
    } else {
        if(cn % 2 == 0) {
            // even
            return (prod_neg / largestNegative) * prod_pos;
        } else {
            // odd
            return prod_neg * prod_pos;
        }
    }
}

signed main() {
    fast;
    vector<int> arr{11, 2, 3};
    cout << minProduct(arr) << "\n";
    return 0;

    return 0;
}