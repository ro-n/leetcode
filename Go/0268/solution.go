// 2020-08-07 21:45:59

func missingNumber(nums []int) int {
	ret := len(nums)
	for i, v := range nums {
		ret = ret ^ v ^ i
	}
	return ret
}