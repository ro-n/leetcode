// 2020-08-04 16:16:25

func twoSum(numbers []int, target int) []int {
	if len(numbers) <= 1 {
		return []int{}
	}
	for i, j := 0, len(numbers)-1; i < j; {
		if target > numbers[i]+numbers[j] {
			i++
		} else if target < numbers[i]+numbers[j] {
			j--
		} else {
			return []int{i + 1, j + 1}
		}
	}
	return []int{}
}
