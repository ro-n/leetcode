# 2020-08-07 23:57:27

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        N = len(nums)
        ret = N
        for i in range(len(nums)):
            ret = ret ^ nums[i] ^ i
        return ret