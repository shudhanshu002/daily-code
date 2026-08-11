#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& subset, int index) {
    if (index == nums.size()) {
        // Base case: If index reaches the end, print the subset
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "} "<<endl;
        return;
    }

    // Include the current element
    subset.push_back(nums[index]);
    generateSubsets(nums, subset, index + 1);

    // Exclude the current element (backtrack)
    subset.pop_back();
    generateSubsets(nums, subset, index + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> subset;
    cout << "All subsets: "<<endl;
    generateSubsets(nums, subset, 0);
    cout << endl;
    return 0;
}

