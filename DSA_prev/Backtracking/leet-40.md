```cpp
class Solution {
public:
    vector<vector<int>> ans;
    void find(vector<int>& candidates,int target,int idx,vector<int> &temp) {
        if(target < 0) return ;
        if(target == 0) {
            ans.push_back(temp);
            return;
        }

        for(int i=idx;i<candidates.size();i++){
            if(i!=idx and candidates[i] == candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            find(candidates,target-candidates[i],i+1,temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        find(candidates,target,0,temp);
        return ans;
    }
};
```