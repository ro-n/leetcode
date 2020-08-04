// 2020-08-04 15:10:55

func twoSum(nums []int, target int) []int {
	_map := map[int]int{}
	for index, num := range nums {
		diff := target - num
		if index_, ok := _map[diff]; ok {
			return []int{index_, index}
		}
		_map[num] = index
	}
	return []int{}
}
