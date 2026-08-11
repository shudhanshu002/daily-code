
```cpp
class Solution {
public:
    vector<vector<int>> ans;

    void permutation(int idx, vector<int> &nums) {
        if(idx == nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> st;

        for(int i=idx;i<nums.size();i++){
            if(st.count(nums[i])) continue;
            st.insert(nums[i]);
            swap(nums[idx], nums[i]);
            permutation(idx+1, nums);
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permutation(0, nums);
        return ans;
    }
};
```