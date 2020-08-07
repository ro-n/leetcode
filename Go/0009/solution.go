// 2020-08-05 23:53:44

func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}
	remain := x
	total := 0
	for remain != 0 {
		num := remain % 10
		total = total*10 + num
		remain /= 10
	}
	return total == x
}