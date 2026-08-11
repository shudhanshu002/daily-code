```cpp
class Solution {
public:
    vector<vector<int>> ans;

    void helper(vector<int> nums, int idx,vector<int> &temp) {
        ans.push_back(temp);

        for(int i=idx;i<nums.size();i++) {
            if(i!=idx && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            helper(nums,i+1,temp);
            temp.pop_back();
        }
    }

    void helper2(int idx,vector<int> &temp, vector<int> &nums){
        if(idx == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // take 
        temp.push_back(nums[idx]);
        helper2(idx+1,temp,nums);
        temp.pop_back();

        // if earlier element in temp is same as current then skip call not done
        if(temp.empty() || (temp.size()>0 && temp.back() != nums[idx])) {
            helper2(idx+1,temp,nums);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        // helper(nums,0,temp);
        helper2(0,temp,nums);
        return ans;
    }
};
```