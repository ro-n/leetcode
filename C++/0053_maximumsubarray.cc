// 2020-08-08 23:54:28

#include <limits>
#include <vector>


class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int cur = 0;
        int max_ = std::numeric_limits<int>::min();

        for (auto num: nums) {
            cur = cur <= 0 ? num : cur + num;
            max_ = max(cur, max_);
        }
        return max_;
    }

    int max(int a, int b) {
        return a > b ? a : b;
    }
};