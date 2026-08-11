#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    // Generate all subsets
    for(int mask = 0; mask < (1 << n); mask++) {
        cout << "{ ";
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                cout << arr[i] << " ";
            }
        }
        cout << "}" << endl;
    }

    return 0;
}
