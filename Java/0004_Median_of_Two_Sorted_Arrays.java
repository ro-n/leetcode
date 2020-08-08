// 2020-08-07 18:18:42

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int total = nums1.length + nums2.length;
        if (total % 2 == 1) {
            return f(nums1, nums2, total / 2 + 1);
        } else {
            return (f(nums1, nums2, total / 2) + f(nums1, nums2, total / 2 + 1)) / 2;
        }
    }

    double f(int[] nums1, int[] nums2, int k) {
        int len1 = nums1.length, len2 = nums2.length;
        int base1 = 0, base2 = 0;

        while (true) {
            if (len1 == 0)
                return nums2[base2 + k - 1];
            if (len2 == 0)
                return nums1[base1 + k - 1];
            if (k == 1)
                return Math.min(nums1[base1], nums2[base2]);

            int i = Math.min(k / 2, len1);
            int j = Math.min(k - i, len2);

            int a = nums1[base1 + i - 1], b = nums2[base2 + j - 1];

            if (i + j == k && a == b) return a;

            if (a <= b) {
                base1 += i;
                len1 -= i;
                k -= i;
            }

            if (a >= b) {
                base2 += j;
                len2 -= j;
                k -= j;
            }
        }
    }
}