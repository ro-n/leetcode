// 2020-08-07 23:24:22

func merge(nums1 []int, m int, nums2 []int, n int) {
	k := len(nums1) - 1
	i := m - 1
	j := n - 1

	for i >= 0 && j >= 0 {
		if nums2[j] > nums1[i] {
			nums1[k] = nums2[j]
			k = k - 1
			j = j - 1
		} else {
			nums1[k] = nums1[i]
			k = k - 1
			i = i - 1
		}
	}

	for j >= 0 {
		nums1[k] = nums2[j]
		k = k - 1
		j = j - 1
	}
}