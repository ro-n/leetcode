# 2020-08-04 00:03:10

from typing import List


class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        if numbers is None or len(numbers) <= 1:
            return [0, 0]
        i = 0
        j = len(numbers) - 1
        while i < j:
            while i < j and target > numbers[j] + numbers[i]:
                i += 1
            while i < j and target < numbers[j] + numbers[i]:
                j -= 1
            if target == numbers[j] + numbers[i]:
                return [i + 1, j + 1]
            else:
                continue
        return [0, 0]
