# 2020-08-07 23:50:02

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_ = -math.inf
        cur = 0

        for num in nums:
            cur = cur + num if not cur <= 0 else num
            max_ = max(cur, max_)

        return max_