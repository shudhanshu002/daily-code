#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxScoreFromSubarray(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> left(n, -1), right(n, n);

    // Finding the left boundary for each element where it is the minimum
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            left[i] = st.top();
        }
        st.push(i);
    }

    // Clear the stack for right boundary computation
    while (!st.empty()) st.pop();

    // Finding the right boundary for each element where it is the minimum
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            right[i] = st.top();
        }
        st.push(i);
    }

    // Finding the maximum sum of smallest and second smallest
    int maxScore = 0;
    for (int i = 0; i < n; i++) {
        if (left[i] != -1) {
            maxScore = max(maxScore, arr[i] + arr[left[i]]);
        }
        if (right[i] != n) {
            maxScore = max(maxScore, arr[i] + arr[right[i]]);
        }
    }

    return maxScore;
}

int main() {
    vector<int> arr = {4, 3, 1, 5, 6};
    cout << "Maximum Score: " << maxScoreFromSubarray(arr) << endl;
    return 0;
}

