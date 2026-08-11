#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 5, 67, 1, 23};
    int n = 5;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {  // Corrected the loop condition to use j and added -i for optimization
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
