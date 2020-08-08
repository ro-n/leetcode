// 2020-08-08 23:43:57

#include <vector>
using std::vector;


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        if (total % 2 == 0) {
            return (findKthMinimum(nums1, nums2, (total/2) + 1) + findKthMinimum(nums1, nums2, (total/2))) / 2.0;
        }
        else {
            return findKthMinimum(nums1, nums2, (total/2) + 1);
        }
    }

    double findKthMinimum(vector<int>& nums1,
        vector<int>& nums2, int k) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int base1 = 0;
        int base2 = 0;

        while (true) {
            if (len1 == 0) {
                return nums2[base2 + k - 1];
            }
            if (len2 == 0) {
                return nums1[base1 + k - 1];
            }
            if (k == 1) {
                return min(nums1[base1], nums2[base2]);
            }

            int i = min(len1, k/2);
            int j = min(len2, k-i);

            int a = nums1[base1 + i - 1];
            int b = nums2[base2 + j - 1];

            if (i + j == k && a == b) {
                return a;
            }

            if (a <= b) {
                len1 -= i;
                k -= i;
                base1 += i;
            }
            if (a >= b) {
                len2 -= j;
                k -= j;
                base2 += j;
            }
        }
    }

    int min(int a, int b) {
        return a < b ? a : b;
    }
};