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

// void merge(vector<int> &arr,int l,int m,int r) {
//     int n1 = m-l + 1;
//     int n2 = r-m;

//     vector <int> left(n1), right(n2);

    
//     for(int i=0;i<n1;i++) left[i] = arr[l+i];
//     for(int i=0;i<n2;i++) right[i] = arr[m+1+i];

//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2) {
//         if(left[i] <= right[j]) arr[k++] = left[i++];
//         else arr[k++] = right[j++];
//     }

//     while(i<n1) arr[k++] = left[i++];
//     while(j<n2) arr[k++] = right[j++];
// }

// void mergeSort(vector<int> &arr,int l,int r) {
//     int mid = l + (r-l)/2;
//     mergeSort(arr,l,m);
//     mergeSort(arr,m+1,r);
//     merge(arr,l,m,r);
// }

void merge(vector<int> &arr,vector<int> left,vector<int> right){
    int i=0,j=0,k=0;

    while(i<left.size() && j<right.size()) {
        if(left[i]<=right[j]) arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }

    while(i<left.size()) arr[k++] = left[i++];
    while(j<right.size()) arr[k++] = right[j++];
}

void mergeSort(vector<int> &arr) {
    int n = arr.size();
    if(n<=1) return ;
    int n1 = n/2,n2=n-n/2;
    vector<int> left(n1), right(n2);
    for(int i=0;i<n1;i++) left[i] = arr[i];
    for(int j=0;j<n2;j++) right[j] = arr[n1+j];
    mergeSort(left);
    mergeSort(right);
    merge(arr,left,right);
}

// void mergeSort(vector<int> &arr,int l,int r){
//     int m = l + (r-l)/2;
//     mergeSort(arr,l,m);
//     mergeSort(arr,m+1,r);
//     merge(arr,l,m,r);
// }

signed main() {
    fast;
    
    vector<int> arr = {12,45,23,1,4,56,2,9};
    mergeSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}