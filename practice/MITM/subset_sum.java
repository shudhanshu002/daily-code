package MITM;

import java.util.List;

public class subset_sum {

    void generate(int[] nums, int start, int end, List<Integer> sums) {
    int len = end - start;

    for (int mask = 0; mask < (1 << len); mask++) {
        int sum = 0;

        for (int i = 0; i < len; i++) {
            if ((mask & (1 << i)) != 0) {
                sum += nums[start + i];
            }
        }

        sums.add(sum);
    }
}

    public void fun(int[] nums) {
        int n = nums.length;
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if ((mask & (1 << i)) != 0) {
                    sum += nums[i];
                }
            }

            System.out.println(sum);
        }
    }
}