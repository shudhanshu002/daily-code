// Given an array arr[] of size n, the task is to find all the Leaders in the array. An element is a Leader if it is greater than or equal to all the elements to its right side.

#include <bits/stdc++.h>
using namespace std;


vector<int> leaders(vector<int> &arr) {
    vector<int> res;
    int n = arr.size();

    int maxRight = arr[n-1];
    res.push_back(maxRight);

    for(int i = n-2;i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}
