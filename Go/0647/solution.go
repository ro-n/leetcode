// 2020-08-07 16:53:13

func countSubstrings(s string) int {
	count := 0
	for i := 0; i < len(s); i++ {
		count += expand(s, i, i)
		count += expand(s, i, i+1)
	}
	return count
}

func expand(s string, l int, r int) int {
	count := 0
	for l >= 0 && r <= len(s)-1 && s[l] == s[r] {
		l--
		r++
		count++
	}
	return count
}