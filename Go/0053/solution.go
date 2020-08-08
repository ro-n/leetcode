import "math"

// 2020-08-07 21:17:16

func maxSubArray(nums []int) int {
	max := math.MinInt32
	cur := 0
	for i, _ := range nums {
		if cur <= 0 {
			cur = nums[i]
		} else {
			cur = cur + nums[i]
		}

		max = Max(max, cur)
	}

	return max
}

func Max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}