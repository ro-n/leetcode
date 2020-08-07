// 2020-08-04 23:37:31

#include <vector>
#include <algorithm>

using std::vector;
using std::swap;

class Solution {
public:

    void allPermuteFromStart(vector<int>& nums, int start) {
        if (start == nums.size()) {
            result.push_back(nums);
        } else {
            for (int i = start; i < nums.size(); i++) {
                swap(nums[start], nums[i]);
                allPermuteFromStart(nums, start + 1);
                swap(nums[start], nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        allPermuteFromStart(nums, 0);
        return result;
    }

private:

    vector<vector<int>> result;
};
