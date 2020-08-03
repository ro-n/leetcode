# 2020-08-04 00:01:32

from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        _map = {}
        for index, num in enumerate(nums):
            diff = target - num
            if diff in _map:
                return [_map[diff], index]
            else:
                _map[num] = index
        return [-1, -1]
