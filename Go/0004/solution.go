// 2020-08-07 20:14:56

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	total := len(nums1) + len(nums2)
	if (total & 1) == 1 {
		return float64(f(nums1, nums2, total/2+1))
	} else {
		return float64(f(nums1, nums2, total/2+1)+f(nums1, nums2, total/2)) / 2.0
	}
}

func f(nums1 []int, nums2 []int, k int) int {
	len1 := len(nums1)
	len2 := len(nums2)
	base1 := 0
	base2 := 0

	for true {
		if len1 == 0 {
			return nums2[base2+k-1]
		}
		if len2 == 0 {
			return nums1[base1+k-1]
		}
		if k == 1 {
			return min(nums1[base1], nums2[base2])
		}

		i := min(len1, k/2)
		j := min(len2, k-i)

		a := nums1[base1+i-1]
		b := nums2[base2+j-1]

		if i+j == k && a == b {
			return a
		}

		if a <= b {
			base1 = base1 + i
			len1 = len1 - i
			k = k - i
		} else if a >= b {
			base2 = base2 + j
			len2 = len2 - j
			k = k - j
		}
	}

	return 0
}

func min(a int, b int) int {
	if a < b {
		return a
	} else {
		return b
	}
}