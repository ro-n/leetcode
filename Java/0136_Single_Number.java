// 2020-08-04 00:00:16

class Solution {
    public int singleNumber(int[] nums) {
        int res = 0;
        for (int num: nums) res ^= num;
        return res;
    }
}