```cpp
class Solution {
public:
    vector<vector<int>> re;

    void solve(int k,int n,vector<int> &temp,int idx){
        if(k<0) return;

        if(k==0 && n==0){
            re.push_back(temp);
            return;
        }

        for(int i=idx;i<=9;i++){
            temp.push_back(i);
            solve(k-1,n-i,temp,i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(k,n,temp,1);
        return re;
    }
};
```