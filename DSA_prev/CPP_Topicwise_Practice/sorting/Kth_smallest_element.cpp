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


int x=8;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j=low;j<high;j++) {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}
int ans;
void quickSort(vector<int> &arr,int low,int high){
    if(low<=high) {
        int par = partition(arr,low,high);
        if(par+1 == x ) {
            ans = arr[par];
            return;
        }else if(par+1 < x) quickSort(arr,par+1,high);
        else quickSort(arr,low,par-1);
    }
}

signed main() {
    fast;
    
    vector<int> arr = {7, 2, 1, 6, 8, 5, 3, 4};

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
    cout<<ans;
    
    return 0;
}