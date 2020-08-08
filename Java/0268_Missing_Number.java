// 2020-08-07 17:15:07

class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length, ret = n;
        for (int i = 0; i < n; i++) {
            ret = ret ^ i ^ nums[i];
        }
        return ret;
    }
}