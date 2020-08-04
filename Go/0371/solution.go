// 2020-08-04 16:35:03

func getSum(a int, b int) int {
	sum, carry := a, b
	for carry != 0 {
		sum = (a ^ b)
		carry = (a & b) << 1
		a = sum
		b = carry
	}
	return sum
}
