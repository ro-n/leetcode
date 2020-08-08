// 2020-08-07 18:26:37

class Solution {
    public int maxSubArray(int[] nums) {
        int max = Integer.MIN_VALUE, cur = 0;

        for (int i = 0; i < nums.length; i++) {
            cur = cur <= 0 ? nums[i] : (cur + nums[i]);
            max = Math.max(max, cur);
        }

        return max;
    }
}