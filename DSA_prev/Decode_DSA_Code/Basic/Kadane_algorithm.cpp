#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums, int &a, int &b) {
    int maxSum = nums[0];
    int currSum = 0;
    int start = 0;  // Temporary variable to track the starting index

    a = b = 0;  // Initialize `a` and `b`

    for (int i = 0; i < nums.size(); i++) {
        if (currSum == 0) {
            start = i;  // Set potential new start of subarray
        }

        currSum += nums[i];

        if (currSum > maxSum) {
            maxSum = currSum;
            a = start;  // Update the actual start index
            b = i;      // Update the end index
        }

        if (currSum < 0) {
            currSum = 0;  // Reset sum if negative
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int a, b;
    int maxSum = maxSubArray(nums, a, b);

    cout << "Maximum Subarray Sum: " << maxSum << endl;
    cout << "Subarray Indices: [" << a << ", " << b << "]" << endl;

    return 0;
}
