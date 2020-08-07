# 2020-08-05 13:05:09

class Solution:

    def __init__(self):
        self.ret = []

    def all_permute_from_start(self, nums: List[int], start: int):
        if start == len(nums):
            self.ret.append([x for x in nums])
        for i in range(start, len(nums)):
            nums[i], nums[start] = nums[start], nums[i]
            self.all_permute_from_start(nums, start + 1)
            nums[i], nums[start] = nums[start], nums[i]


    def permute(self, nums: List[int]) -> List[List[int]]:
        self.all_permute_from_start(nums, 0)
        return self.ret
