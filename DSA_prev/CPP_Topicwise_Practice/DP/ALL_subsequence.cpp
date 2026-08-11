#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>

using namespace std;


void subSequence(int idx, vector<int> &arr, vector<int> &curr) {
    if(idx == arr.size()) {
        for(int x: curr) cout<< x << " ";
        cout<<endl;
        return;
    }

    // take
    curr.push_back(arr[idx]);
    subSequence(idx+1, arr, curr);
    curr.pop_back();

    // skip
    subSequence(idx+1, arr, curr);
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> curr;

    subSequence(0, arr, curr);
    return 0;
}

