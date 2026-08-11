#include <iostream>
#include <vector>

using namespace std;

void find_uniques(vector<int>& arr, int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    int temp = res;
    int k = 0;
    while(true) {
        if((temp & 1) == 1) {
            break;
        }
        temp = temp >> 1;
        k++;
    }
    int retval = 0;
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        if(((num >> k) & 1) == 1) {
            retval = retval ^ num;
        }
    }
    cout << retval << " ";
    res = retval ^ res;
    cout << res << endl;
}

int main() {
    vector<int> arr = {2, 2, 4, 5, 6, 7, 8, 8, 7, 6, 1, 1};
    find_uniques(arr, 12);
    return 0;
}

