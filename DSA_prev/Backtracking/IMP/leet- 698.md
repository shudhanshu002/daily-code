```cpp
// k^n tc 
class Solution
{
public:
    bool backtrack(int idx, vector<int> &nums, vector<int> &bucket, int target, int k)
    {
        if (idx == nums.size())
            return true;

        for (int i = 0; i < k; i++)
        {
            if (bucket[i] + nums[idx] <= target)
            {
                bucket[i] += nums[idx];

                if (backtrack(idx + 1, nums, bucket, target, k))
                    return true;

                bucket[i] -= nums[idx];
            }

            if (bucket[i] == 0)
                break;
        }
        return false;
    }

    bool canPartitionKSubsets(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int x : nums)
            sum += x;

        if (sum % k != 0)
            return false;

        int target = sum / k;

        sort(nums.rbegin(), nums.rend());

        vector<int> bucket(k, 0);
        return backtrack(0, nums, bucket, target, k);
    }
};

```

## method = 2

