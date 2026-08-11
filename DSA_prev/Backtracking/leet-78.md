
```cpp
class Solution {
public:
    vector<vector<int>> re;

    void generate(int idx,vector<int> &temp,vector<int> &nums){
        if(idx == nums.size()) {
            re.push_back(temp);
            return;
        }

        // take
         temp.push_back(nums[idx]);
         generate(idx+1,temp,nums);
         temp.pop_back();

         // skip
         generate(idx+1,temp,nums);
    }

    void helper(int idx,vector<int> &temp,vector<int> &nums){
        re.push_back(temp);

        for(int i=idx;i<nums.size();i++){
            temp.push_back(nums[i]);
            helper(i+1,temp,nums);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        helper(0,temp,nums);
        return re;
    }
};
```