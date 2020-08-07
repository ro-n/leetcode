import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

// 2020-08-04 22:14:03

class Solution {

    private List<List<Integer>> result = new ArrayList<>();

    void allPermuteFromStart(List<Integer> nums, int start) {
        if (start == nums.size()) {
            result.add(new ArrayList<>(nums));
        } else {
            for (int i = start; i < nums.size(); i++) {
                Collections.swap(nums, i, start);
                allPermuteFromStart(nums, start + 1);
                Collections.swap(nums, i, start);
            }
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        if (nums == null || nums.length == 0)
            return new ArrayList<>();

        List<Integer> list = new ArrayList<>();
        for (int num : nums)
            list.add(num);

        allPermuteFromStart(list, 0);
        return result;
    }
}
