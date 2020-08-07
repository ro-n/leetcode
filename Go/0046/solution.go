// 2020-08-07 12:35:08

func permute(nums []int) [][]int {
	ret := make([][]int, 0)
	allPermuteFromStart(nums, 0, &ret)
	return ret
}

func allPermuteFromStart(nums []int, start int, ret *[][]int) {
	if start == len(nums) {
		*ret = append(*ret, append([]int{}, nums...))
	} else {
		for i := start; i < len(nums); i++ {
			nums[start], nums[i] = nums[i], nums[start]
			allPermuteFromStart(nums, start+1, ret)
			nums[start], nums[i] = nums[i], nums[start]
		}
	}
}