# 2020-08-07 23:09:52

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        total = len(nums1) + len(nums2)
        if total % 2 == 0:
            return (self.f(nums1, nums2, total//2) + self.f(nums1, nums2, total//2+1)) / 2.0
        else:
            return self.f(nums1, nums2, total//2+1)

    def f(self, nums1, nums2, k):
        len1 = len(nums1)
        len2 = len(nums2)

        base1 = 0
        base2 = 0

        while True:
            if len1 == 0:
                return nums2[base2 + k - 1]
            if len2 == 0:
                return nums1[base1 + k - 1]
            if k == 1:
                return min(nums1[base1], nums2[base2])
            
            i = min(len1, k//2)
            j = min(len2, k-i)

            a = nums1[base1 + i - 1]
            b = nums2[base2 + j - 1]

            if i + j == k and a == b:
                return a

            if a <= b:
                len1 -= i
                base1 += i
                k -= i
            if a >= b:
                len2 -= j
                base2 += j
                k -= j
