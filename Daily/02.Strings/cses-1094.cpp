// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long count = 0;
    vector<int> vec(n);

    for(int i=0; i<n;i++){
        cin >> vec[i];
    }

    int prev = vec[0];
    for(int i=1; i<n;i++){
        if(vec[i] < prev) {
            count += prev - vec[i];
        }

        prev = max(prev, vec[i]);
    }

    cout<<count;
}

