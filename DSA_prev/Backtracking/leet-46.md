```cpp
class Solution {
public:
    vector<vector<int>> re;

    void generate(int idx, vector<int> &nums) {
        if(idx == nums.size()) {
            re.push_back(nums);
            return;
        }

        for(int i = idx;i<nums.size();i++){
            swap(nums[idx], nums[i]);
            generate(idx+1, nums);
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        generate(0, nums);
        return re;
    }
};
```