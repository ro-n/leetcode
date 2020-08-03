// 2020-08-03 23:59:27

import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int numNeeded = target - nums[i];
            if (map.containsKey(numNeeded)) {
                return new int[] { map.get(numNeeded), i };
            }
            map.put(nums[i], i);
        }
        return new int[] { -1, -1 };
    }
}