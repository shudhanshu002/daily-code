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
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;

bool cmp(pair<int, int> &p1, pair<int,int> &p2){
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    return r1 > r2;
}

double fractionalKnapsack(vector<int> &profit, vector<int> &weights, int n, int W){
    vector<pair<int, int>> arr;
    for(int i =0;i<n;i++){
        arr.push_back({profit[i], weights[i]});
    }

    sort(arr.begin(), arr.end(), cmp);
    double result = 0;
    for(int i=0;i<n;i++) {
        if(arr[i].second <= W) {
            result += arr[i].first;
            W -= arr[i].second;
        } else {
            result += ((arr[i].first*1.0) / (arr[i].second*1.0)) * W;
            W = 0;
            break;
        }
    }

    return result;
}

signed main() {
    fast;
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int W = 50;
    int n = 3;
    cout << fractionalKnapsack(profit, weights, n, W) << "\n";

    return 0;
}