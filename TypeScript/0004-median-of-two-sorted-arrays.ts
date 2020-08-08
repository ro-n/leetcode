function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
  let total = nums1.length + nums2.length;
  if (total % 2 == 1) {
    return k(nums1, nums2, Math.floor(total / 2) + 1);
  } else {
    return (
      (k(nums1, nums2, Math.floor(total / 2) + 1) +
        k(nums1, nums2, Math.floor(total / 2))) /
      2.0
    );
  }
}

function k(nums1: number[], nums2: number[], k: number) {
  let len1 = nums1.length;
  let len2 = nums2.length;
  let base1 = 0;
  let base2 = 0;

  while (true) {
    if (len1 == 0) {
      return nums2[base2 + k - 1];
    }
    if (len2 == 0) {
      return nums1[base1 + k - 1];
    }
    if (k == 1) {
      return Math.min(nums1[base1], nums2[base2]);
    }

    let i = Math.min(len1, Math.floor(k / 2));
    let j = Math.min(len2, k - i);

    let a = nums1[base1 + i - 1];
    let b = nums2[base2 + j - 1];

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
