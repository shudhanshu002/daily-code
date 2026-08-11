import java.util.*;

class Solution {
    long [][] dp;

    long helper(int[] nums, int idx, int parity) {
        if(idx >= nums.length) return 0;

        if(dp[idx][parity] != -1) return dp[idx][parity];

        long skip = helper(nums, idx+1, parity);

        long take;
        if(parity == 1) {
            take = helper(nums, idx+1, 0) + nums[idx];
        } else {
            take = helper(nums, idx+1, 1) - nums[idx];
        }

        return dp[idx][parity] = Math.max(skip, take);
    }

    public long maxAlternatingSum(int[] nums) {
        int n = nums.length;
        dp = new long[n][2];

        for(long[] row:dp) {
            Arrays.fill(row, -1);
        }

        return helper(nums, 0, 1);
    }
}



class Solution2 {
    public long maxAlternatingSum(int[] nums) {
        long even = 0; // Maximum alternating sum ending with an even number of elements
        long odd = 0;  // Maximum alternating sum ending with an odd number of elements

        for (int num : nums) {
            long newEven = Math.max(even, odd + num);
            long newOdd = Math.max(odd, even - num);

            even = newEven;
            odd = newOdd;
        }

        return even;
    }
}