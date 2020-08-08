// 2020-08-08 23:57:39

#include <vector>

using std::vector;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int total = nums1.size() - 1;
        int i = m - 1;
        int j = n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[total--] = nums2[j--];
            } else {
                nums1[total--] = nums1[i--];
            }
        }

        while (j >= 0) {
            nums1[total--] = nums2[j--];
        }

    }
};