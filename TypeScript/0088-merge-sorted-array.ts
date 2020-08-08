// 2020-08-08 15:50:07

/**
 Do not return anything, modify nums1 in-place instead.
 */
function merge(nums1: number[], m: number, nums2: number[], n: number): void {
  let k = nums1.length - 1;
  let i = m - 1;
  let j = n - 1;
  while (i >= 0 && j >= 0) {
    if (nums1[i] < nums2[j]) {
      nums1[k--] = nums2[j--];
    } else {
      nums1[k--] = nums1[i--];
    }
  }

  while (j >= 0) {
    nums1[k--] = nums2[j--]
  }
};